# CornerstoneInject

#### 破解过程
打开app，弹出试用的窗口，先用`Xcode`附加调试看看：

```
(lldb) bt
    frame #17: 0x0000000102f9095d LicensingKit`-[ZTrialPeriodLicensingPolicy applyWithUserInterface:] + 173
    frame #18: 0x0000000102f944a7 LicensingKit`-[ZOwnershipLicensingPolicy applyWithUserInterface:] + 647
    frame #19: 0x0000000102f78114 LicensingKit`-[ZSubscriptionLicensingPolicy applyWithUserInterface:] + 539
    frame #20: 0x0000000102fa0c20 LicensingKit`-[ZLicensePackageRegistrationPolicy applyWithUserInterface:] + 191
    frame #21: 0x0000000102f8fbbe LicensingKit`-[ZPreReleaseLicensingPolicy applyWithUserInterface:] + 221
    frame #22: 0x0000000102f93543 LicensingKit`-[ZEULALicensingPolicy applyWithUserInterface:] + 234
    frame #23: 0x0000000102f97071 LicensingKit`-[ZStandardLicensingPolicy applyWithUserInterface:] + 57
```

明显的责任链模式，进行逐步验证。  
直接修改`-[ZStandardLicensingPolicy applyWithUserInterface:]`，返回`YES`试试:

```
                     -[ZStandardLicensingPolicy applyWithUserInterface:]:
0000000000028038         mov        rax, 0x1                                    ; DATA XREF=0x5bf40
000000000002803f         ret
```

重新打开，直接闪退了，里面做了完整性校验。所以改用动态注入的方式，破解成功！
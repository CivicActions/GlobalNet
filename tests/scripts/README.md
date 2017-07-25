# GlobalNET tests/scripts

This directory will hold scripts for various tests required by the NIST RMF.

This README contains notes that describe tests to be created and managed either with behat or as bash/drush scripts. Eventually it will contain instructions on how to run the tests.

See also:
- https://globalnet.atlassian.net/browse/GN-555 - Audit and Accountability
- https://globalnet.atlassian.net/browse/RD-1095 - Discovery: Drupal Hardening, Reporting
- [RMF Compliance ETC](https://docs.google.com/spreadsheets/d/1_4owxONpPmdCFO2sbWJ3LkubR7x5Fz6IwWsE4FJM8Oc/edit?usp=sharing) (google spreadsheet)

### AC-3 Access Enforcement (see: Organization Policy AC-2(5) Inactivity Logout)
```
drush pml --status=Enabled | grep autologout
drush vset autologout_redirect_url '/'
drush vset autologout_enforce_admin 1
drush vset autologout_role_2 1
drush vset autologout_role_2_timeout 3600
drush vset autologout_role_9 1
drush vset autologout_role_9_timeout 3600
drush vset autologout_role_logout 1
drush vset autologout_timeout 3600
drush vset autologout_use_watchdog 1
```

### AC-7 Unsuccessful Logon Attempts
```
drush pml --status=Enabled | grep flood-control
drush vset user_failed_login_user_limit 4
drush vset user_failed_login_user_window 1800
```

### AC-8 System Use Notification
```
drush pml --status=Enabled | grep legal
drush sqlq 'select * from legal_conditions;'
```

### AC-11 Session Lock & Patter-hiding Displays
_The installation and use of screen savers is outside the scope of this project._

### AC-17 Remote Access
#### AC-17(1) Automated Monitoring/Control
- SSH: all user logins/logouts logged
- WEB: all user logins/logouts logged

AC-17(2) Protection Of Confidentiality / Integrity Using Encryption
- SSH: via OpenSSH
- WEB: via SSL/TLS

### IA-5(1)(a) Password complexity _and_ IA-5(1)(e) Password reuse (Enforces IA-5(4) policy)
- punctuation: 1
- digit: 1
- length: 8
- uppercase: 1
- history: 4

```
drush pml --status=Enabled | grep password-policy
drush sqlq 'select policy from password_policy where enabled = 1;'"
```

### IA-5(1)(d) Password expiration
```
drush pml --status=Enabled | grep password-policy
drush sqlq 'select expiration from password_policy where enabled = 1;'"
```


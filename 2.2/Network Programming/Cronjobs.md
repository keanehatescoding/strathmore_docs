Cron is the scheduling tool used on Linux and Unix systems
The crond daemon enables cron functionality and runs in background.
The cron reads the crontab (cron tables) for running predefined scripts.
Entries in crontab are known as Cron jobs
They can be added by root or an individual user who has been permitted by root (admin)
A user is permitted to add cron jobs when their user name is added in /etc/cron.allow
User names are added in /etc/cron.d/cron.deny to prevent a user from adding cron jobs
crontab -e command is used to edit crontab entries to add, delete, or edit cron jobs.
Root (admin) can add cron jobs in locations shown below
/etc/cron.d directory – Custom crontab files can be added
/etc/cron.hourly – Jobs that run once per hour
/etc/cron.daily  – Jobs that run once a day
/etc/cron.weekly – Jobs that run once per week
/etc/cron.monthly  – Jobs that run once per month
For individual users, the cron service checks the directory: /var/spool/cron/crontabs
The log file for cron jobs is /var/log/syslog

To add, delete, or edit cron jobs crontab entries type:
```shell
crontab -e
```
To list the crontabs of a particular user type
```shell
sudo crontab -u $USER -l
```
To edit another users crons type
```shell
sudo crontab -u $USER -e
```


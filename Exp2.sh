 

#!/bin/bash
i="y"

while [ $i = "y" ]
do
echo "1.OS Version, release number, Kernel Version "
echo "2.Display top 10 Process in decending order"
echo "3.Display Processes with highest memory usage"
echo "4.Display Current logged user and Login Name"
echo "5.Display Current Shell, home directory, operating system type, current Path Setting, current working directory"
echo "Enter your choice"
read ch
case $ch in
1)echo "OS Name is:"
        uname;
  echo "Release Number is:"
        uname -a;
  echo "kernel Version"
        uname -r;;
2)echo "Top 10 Processes in decending order:"
        ps axl | head -n 10;;
3)echo "Display Processes with highest memory usage"
        ps -eo pid,ppid,cmd,%mem,%cpu --sort=-%mem | head;;
4)echo "Logged in users are :-\n"
        who -u;
  echo "Number of Logged in users are:-\n"
        who -u | wc -l;;
5)echo "Current Shell :-\n"
        which bash;
  echo "Current home directory-\n"
        whoami;
  echo "Current operating system type is-\n"
        uname;
  echo "Current Path Setting and current working directory is-\n"
        pwd;;
*)echo "Invalid choice";;
esac
echo "Do u want to continue ?"
read i
if [ $i != "y" ]
then
exit
fi
done

<<OUTPUT

aiktc@aiktc:~/Downloads$ bash Exp2.sh
1.OS Version, release number, Kernel Version 
2.Display top 10 Process in decending order
3.Display Processes with highest memory usage
4.Display Current logged user and Login Name
5.Display Current Shell, home directory, operating system type, current Path Setting, current working directory
Enter your choice
1
OS Name is:
Linux
Release Number is:
Linux aiktc 5.4.0-104-generic #118-Ubuntu SMP Wed Mar 2 19:02:41 UTC 2022 x86_64 x86_64 x86_64 GNU/Linux
kernel Version
5.4.0-104-generic
Do u want to continue ?
y
1.OS Version, release number, Kernel Version 
2.Display top 10 Process in decending order
3.Display Processes with highest memory usage
4.Display Current logged user and Login Name
5.Display Current Shell, home directory, operating system type, current Path Setting, current working directory
Enter your choice
2
Top 10 Processes in decending order:
F   UID     PID    PPID PRI  NI    VSZ   RSS WCHAN  STAT TTY        TIME COMMAND
4     0       1       0  20   0 169460 11128 -      Ss   ?          0:01 /sbin/init splash
1     0       2       0  20   0      0     0 -      S    ?          0:00 [kthreadd]
1     0       3       2   0 -20      0     0 -      I<   ?          0:00 [rcu_gp]
1     0       4       2   0 -20      0     0 -      I<   ?          0:00 [rcu_par_gp]
1     0       6       2   0 -20      0     0 -      I<   ?          0:00 [kworker/0:0H-events_highpri]
1     0       8       2   0 -20      0     0 -      I<   ?          0:00 [mm_percpu_wq]
1     0       9       2  20   0      0     0 -      S    ?          0:00 [ksoftirqd/0]
1     0      10       2  20   0      0     0 -      I    ?          0:03 [rcu_sched]
1     0      11       2 -100  -      0     0 -      S    ?          0:00 [migration/0]
Do u want to continue ?
y
1.OS Version, release number, Kernel Version 
2.Display top 10 Process in decending order
3.Display Processes with highest memory usage
4.Display Current logged user and Login Name
5.Display Current Shell, home directory, operating system type, current Path Setting, current working directory
Enter your choice
3
Display Processes with highest memory usage
    PID    PPID CMD                         %MEM %CPU
   6192    1304 /usr/lib/firefox/firefox    11.2 12.3
    933       1 /usr/sbin/mysqld            10.0  0.2
   6404    6192 /usr/lib/firefox/firefox-bi  7.7  5.8
    887     725 /usr/lib/xorg/Xorg -core :0  4.2  3.9
   6530    6192 /usr/lib/firefox/firefox-bi  3.9  1.3
   6508    6192 /usr/lib/firefox/firefox-bi  3.4  0.5
   6274    6192 /usr/lib/firefox/firefox-bi  3.3  0.5
   6402    6192 /usr/lib/firefox/firefox-bi  2.6  0.1
   1328    1003 /usr/bin/caja                2.6  0.3
Do u want to continue ?
y
1.OS Version, release number, Kernel Version 
2.Display top 10 Process in decending order
3.Display Processes with highest memory usage
4.Display Current logged user and Login Name
5.Display Current Shell, home directory, operating system type, current Path Setting, current working directory
Enter your choice
4
Logged in users are :-\n
aiktc    tty7         2022-01-10 10:27  old         1003 (:0)
Number of Logged in users are:-\n
1
Do u want to continue ?
y
1.OS Version, release number, Kernel Version 
2.Display top 10 Process in decending order
3.Display Processes with highest memory usage
4.Display Current logged user and Login Name
5.Display Current Shell, home directory, operating system type, current Path Setting, current working directory
Enter your choice
5
Current Shell :-\n
/usr/bin/bash
Current home directory-\n
aiktc
Current operating system type is-\n
Linux
Current Path Setting and current working directory is-\n
/home/aiktc/Downloads
Do u want to continue ?
OUTPUT

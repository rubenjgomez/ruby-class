Last login: Mon Sep  9 20:45:04 on ttys000
wl00031016:~ admin$ ssh ubuntu@ec2-23-20-131-97.compute-1.amazonaws.com
Welcome to Ubuntu 13.04 (GNU/Linux 3.8.0-19-generic x86_64)

 * Documentation:  https://help.ubuntu.com/

  System information as of Tue Sep 10 23:42:17 UTC 2013

  System load:  0.0               Processes:           67
  Usage of /:   10.5% of 7.75GB   Users logged in:     0
  Memory usage: 33%               IP address for eth0: 10.245.129.179
  Swap usage:   0%

  Graph this data and manage this system at https://landscape.canonical.com/

  Get cloud support with Ubuntu Advantage Cloud Guest:
    http://www.ubuntu.com/business/services/cloud

  Use Juju to deploy your cloud instances and workloads:
    https://juju.ubuntu.com/#cloud-raring

77 packages can be updated.
34 updates are security updates.

Last login: Tue Sep 10 17:52:41 2013 from 66-192-149-18.static.twtelecom.net
ubuntu@ip-10-245-129-179:~$ ls -la
total 36
drwxr-xr-x 4 ubuntu ubuntu 4096 Sep  9 23:08 .
drwxr-xr-x 4 root   root   4096 Sep 10 16:27 ..
-rw------- 1 ubuntu ubuntu  896 Sep 10 18:44 .bash_history
-rw-r--r-- 1 ubuntu ubuntu  220 Mar 30 15:37 .bash_logout
-rw-r--r-- 1 ubuntu ubuntu 3637 Mar 30 15:37 .bashrc
drwx------ 2 ubuntu ubuntu 4096 Sep  9 23:07 .cache
-rw-r--r-- 1 ubuntu ubuntu  675 Mar 30 15:37 .profile
drwx------ 2 ubuntu ubuntu 4096 Sep 10 15:41 .ssh
-rw------- 1 ubuntu ubuntu  686 Sep  9 23:08 .viminfo
ubuntu@ip-10-245-129-179:~$ passwd
Changing password for ubuntu.
(current) UNIX password: 
passwd: Authentication token manipulation error
passwd: password unchanged
ubuntu@ip-10-245-129-179:~$ chmod 444 /home
chmod: changing permissions of ‘/home’: Operation not permitted
ubuntu@ip-10-245-129-179:~$ ssh class_user@ec2-23-20-131-97.compute-1.amazonaws.com
Permission denied (publickey).
ubuntu@ip-10-245-129-179:~$ cd ~/.ssh
ubuntu@ip-10-245-129-179:~/.ssh$ ls
authorized_keys  known_hosts
ubuntu@ip-10-245-129-179:~/.ssh$ cd /home
ubuntu@ip-10-245-129-179:/home$ ls
class_user  ubuntu
ubuntu@ip-10-245-129-179:/home$ cd class_user/
ubuntu@ip-10-245-129-179:/home/class_user$ ls
ubuntu@ip-10-245-129-179:/home/class_user$ mkdir .ssh
mkdir: cannot create directory ‘.ssh’: Permission denied
ubuntu@ip-10-245-129-179:/home/class_user$ sudo mkdir .ssh
ubuntu@ip-10-245-129-179:/home/class_user$ sudo cp ~/.ssh/authorized_keys .ssh/
ubuntu@ip-10-245-129-179:/home/class_user$ sudo chown -R class_user:class_user .ssh/
ubuntu@ip-10-245-129-179:/home/class_user$ ls =la
ls: cannot access =la: No such file or directory
ubuntu@ip-10-245-129-179:/home/class_user$ ls -la
total 24
drwxr-xr-x 3 class_user class_user 4096 Sep 11 00:00 .
drwxr-xr-x 4 root       root       4096 Sep 10 16:27 ..
-rw-r--r-- 1 class_user class_user  220 Sep 10 16:27 .bash_logout
-rw-r--r-- 1 class_user class_user 3637 Sep 10 16:27 .bashrc
-rw-r--r-- 1 class_user class_user  675 Sep 10 16:27 .profile
drwxr-xr-x 2 class_user class_user 4096 Sep 11 00:02 .ssh
ubuntu@ip-10-245-129-179:/home/class_user$ ssh class_user@ec2-23-20-131-97.compute-1.amazonaws.com
Permission denied (publickey).
ubuntu@ip-10-245-129-179:/home/class_user$ ssh class_user@ec2-23-20-131-97.compute-1.amazonaws.com
Permission denied (publickey).
ubuntu@ip-10-245-129-179:/home/class_user$ ls -la .ssh
total 12
drwxr-xr-x 2 class_user class_user 4096 Sep 11 00:02 .
drwxr-xr-x 3 class_user class_user 4096 Sep 11 00:00 ..
-rw------- 1 class_user class_user 1213 Sep 11 00:02 authorized_keys
ubuntu@ip-10-245-129-179:/home/class_user$ sudo chmod 0777 .ssh/authorized_keys 
ubuntu@ip-10-245-129-179:/home/class_user$ ls -la
total 24
drwxr-xr-x 3 class_user class_user 4096 Sep 11 00:00 .
drwxr-xr-x 4 root       root       4096 Sep 10 16:27 ..
-rw-r--r-- 1 class_user class_user  220 Sep 10 16:27 .bash_logout
-rw-r--r-- 1 class_user class_user 3637 Sep 10 16:27 .bashrc
-rw-r--r-- 1 class_user class_user  675 Sep 10 16:27 .profile
drwxr-xr-x 2 class_user class_user 4096 Sep 11 00:02 .ssh
ubuntu@ip-10-245-129-179:/home/class_user$ ls -la .ssh
total 12
drwxr-xr-x 2 class_user class_user 4096 Sep 11 00:02 .
drwxr-xr-x 3 class_user class_user 4096 Sep 11 00:00 ..
-rwxrwxrwx 1 class_user class_user 1213 Sep 11 00:02 authorized_keys
ubuntu@ip-10-245-129-179:/home/class_user$ ssh class_user@ec2-23-20-131-97.compute-1.amazonaws.com
Permission denied (publickey).
ubuntu@ip-10-245-129-179:/home/class_user$ cd .ssh
ubuntu@ip-10-245-129-179:/home/class_user/.ssh$ cat authorized_keys 
ssh-rsa AAAAB3NzaC1yc2EAAAADAQABAAABAQCEZ5DlDsAI6tNBGaUdqBW45MXhILRfiKjD84ehiOrcWg3pD/TJCwqgkuHk0JDaqtxJCUSDCwPf91rV2WwBvmOoGTdoebOae5OWI1AaYQHAytLDiFNnA4lABelBBDcFrkBtqsRrlS3Aoh0kKd6iDihg6h6/APSGNd531EQ1/KxUsYQz4JC80bYjNJ8BWQ4wjYVvSpwabPctd5Adskp0eA+lk34G46nap5flzJzUjqONHHWlFoZjET21WOvHwruhbN41g+gYouGvlaeEkrUUJ6hVYjVw9ykLoI/1H16B16lrQ71b95NVtxhwiWSXdX9JmDh0FXMv85LsETNaSwx347Pb class-key
ssh-rsa AAAAB3NzaC1yc2EAAAADAQABAAABAQCtY5vvg3Y8m8Ooy6uBpPxIvyWfeN/ByFg98JrlRG3PTMt0/2WLLE+87R8PTZfAfLjmv+7zDwGESi3atqgpSEBJA/Tn+JgDvYrx+bAIjr1hmpG9IZh2hBnzbUItsrnkHqTj4HM/yhkiZuRvnZpdU1ovZUxTQCbblrqAhQoeGJYCcmA3v2d3pBXtvy2xqvkytZ+pyIqOI/UPHD/kxDAy/Z8zOty8YwK4E9VfbmV2rR0qAE1ciKTmxW0PU9mdt5ndHg8HSaz2bJ19GPMUUsy5oVsuH/xMvk9qA7+yd5moHgYvMe7cz/Xri5rzzPvSmfBiaVhQh7NEhlFK/pFHzyJk7PZb ruben.gomez@activenetwork.com
ssh-rsa AAAAB3NzaC1yc2EAAAADAQABAAABAQCqtk9O4mg6fCddXZ8BL9tpupsfTASO+bAdwoqCgy3YxwQbHRkWBW9H80TJGNeBQrNKPUL+Twbb3LsKZutPUDB9EH0PfpkeYFH96TwM67g2X7hLjgxaddvFpecjV2B7V964PAZ+ou07Um99DXRkfCT4Joqt1vwAG3sdoU+K/nc0lCBwb4p4UM2PrssciswmXsxppWyWgr5RkIK+Vm2Ms0E9E5F1jLK4E35tBmb/nlvrjw3oYrwD189DndFccydS4nbbUXJLijFv2A3bzbio0VGXVLZrNaSXO6MRgStSVRr+oGPCuABWirFvi99aQJOvNvbL4eeL+gIJlRTeWZD4fRr5 ruben.gomez@activenetwork.com
ubuntu@ip-10-245-129-179:/home/class_user/.ssh$ nano authorized_keys 
ubuntu@ip-10-245-129-179:/home/class_user/.ssh$ logout
Connection to ec2-23-20-131-97.compute-1.amazonaws.com closed.
wl00031016:~ admin$ ssh class_user@ec2-23-20-131-97.compute-1.amazonaws.com
Permission denied (publickey).
wl00031016:~ admin$ ssh ubuntu@ec2-23-20-131-97.compute-1.amazonaws.com
Welcome to Ubuntu 13.04 (GNU/Linux 3.8.0-19-generic x86_64)

 * Documentation:  https://help.ubuntu.com/

  System information as of Wed Sep 11 00:08:23 UTC 2013

  System load:  0.0               Processes:           68
  Usage of /:   10.5% of 7.75GB   Users logged in:     0
  Memory usage: 37%               IP address for eth0: 10.245.129.179
  Swap usage:   0%

  Graph this data and manage this system at https://landscape.canonical.com/

  Get cloud support with Ubuntu Advantage Cloud Guest:
    http://www.ubuntu.com/business/services/cloud

  Use Juju to deploy your cloud instances and workloads:
    https://juju.ubuntu.com/#cloud-raring

77 packages can be updated.
34 updates are security updates.

Last login: Tue Sep 10 23:42:18 2013 from 66-192-149-18.static.twtelecom.net
ubuntu@ip-10-245-129-179:~$ cd /home/class_user/
ubuntu@ip-10-245-129-179:/home/class_user$ ls
ubuntu@ip-10-245-129-179:/home/class_user$ ls -la
total 24
drwxr-xr-x 3 class_user class_user 4096 Sep 11 00:00 .
drwxr-xr-x 4 root       root       4096 Sep 10 16:27 ..
-rw-r--r-- 1 class_user class_user  220 Sep 10 16:27 .bash_logout
-rw-r--r-- 1 class_user class_user 3637 Sep 10 16:27 .bashrc
-rw-r--r-- 1 class_user class_user  675 Sep 10 16:27 .profile
drwxr-xr-x 2 class_user class_user 4096 Sep 11 00:02 .ssh
ubuntu@ip-10-245-129-179:/home/class_user$ cd .ssh
ubuntu@ip-10-245-129-179:/home/class_user/.ssh$ ls
authorized_keys
ubuntu@ip-10-245-129-179:/home/class_user/.ssh$ ls -la
total 12
drwxr-xr-x 2 class_user class_user 4096 Sep 11 00:02 .
drwxr-xr-x 3 class_user class_user 4096 Sep 11 00:00 ..
-rwxrwxrwx 1 class_user class_user 1213 Sep 11 00:02 authorized_keys
ubuntu@ip-10-245-129-179:/home/class_user/.ssh$ cd ~/
ubuntu@ip-10-245-129-179:~$ ls -la
total 36
drwxr-xr-x 4 ubuntu ubuntu 4096 Sep  9 23:08 .
drwxr-xr-x 4 root   root   4096 Sep 10 16:27 ..
-rw------- 1 ubuntu ubuntu 1384 Sep 11 00:08 .bash_history
-rw-r--r-- 1 ubuntu ubuntu  220 Mar 30 15:37 .bash_logout
-rw-r--r-- 1 ubuntu ubuntu 3637 Mar 30 15:37 .bashrc
drwx------ 2 ubuntu ubuntu 4096 Sep  9 23:07 .cache
-rw-r--r-- 1 ubuntu ubuntu  675 Mar 30 15:37 .profile
drwx------ 2 ubuntu ubuntu 4096 Sep 10 15:41 .ssh
-rw------- 1 ubuntu ubuntu  686 Sep  9 23:08 .viminfo
ubuntu@ip-10-245-129-179:~$ cd /home/class_user/
ubuntu@ip-10-245-129-179:/home/class_user$ ls -la
total 24
drwxr-xr-x 3 class_user class_user 4096 Sep 11 00:00 .
drwxr-xr-x 4 root       root       4096 Sep 10 16:27 ..
-rw-r--r-- 1 class_user class_user  220 Sep 10 16:27 .bash_logout
-rw-r--r-- 1 class_user class_user 3637 Sep 10 16:27 .bashrc
-rw-r--r-- 1 class_user class_user  675 Sep 10 16:27 .profile
drwxr-xr-x 2 class_user class_user 4096 Sep 11 00:02 .ssh
ubuntu@ip-10-245-129-179:/home/class_user$ cd ~/.ssh
ubuntu@ip-10-245-129-179:~/.ssh$ ls -la
total 16
drwx------ 2 ubuntu ubuntu 4096 Sep 10 15:41 .
drwxr-xr-x 4 ubuntu ubuntu 4096 Sep  9 23:08 ..
-rw------- 1 ubuntu ubuntu 1213 Sep  9 23:08 authorized_keys
-rw-r--r-- 1 ubuntu ubuntu  444 Sep 10 15:41 known_hosts
ubuntu@ip-10-245-129-179:~/.ssh$ cp authorized_keys /home/class_user/.ssh/
ubuntu@ip-10-245-129-179:~/.ssh$ cd /home/class_user/.ssh/
ubuntu@ip-10-245-129-179:/home/class_user/.ssh$ ls
authorized_keys
ubuntu@ip-10-245-129-179:/home/class_user/.ssh$ ls -la
total 12
drwxr-xr-x 2 class_user class_user 4096 Sep 11 00:02 .
drwxr-xr-x 3 class_user class_user 4096 Sep 11 00:00 ..
-rwxrwxrwx 1 class_user class_user 1213 Sep 11 00:10 authorized_keys
ubuntu@ip-10-245-129-179:/home/class_user/.ssh$ whoami
ubuntu
ubuntu@ip-10-245-129-179:/home/class_user/.ssh$ sudo class_user 
sudo: class_user: command not found
ubuntu@ip-10-245-129-179:/home/class_user/.ssh$ su class_user
Password: 
class_user@ip-10-245-129-179:~/.ssh$ cd ~/
class_user@ip-10-245-129-179:~$ ls
class_user@ip-10-245-129-179:~$ ls -la
total 24
drwxr-xr-x 3 class_user class_user 4096 Sep 11 00:00 .
drwxr-xr-x 4 root       root       4096 Sep 10 16:27 ..
-rw-r--r-- 1 class_user class_user  220 Sep 10 16:27 .bash_logout
-rw-r--r-- 1 class_user class_user 3637 Sep 10 16:27 .bashrc
-rw-r--r-- 1 class_user class_user  675 Sep 10 16:27 .profile
drwxr-xr-x 2 class_user class_user 4096 Sep 11 00:02 .ssh
class_user@ip-10-245-129-179:~$ cd .ssh
class_user@ip-10-245-129-179:~/.ssh$ ls
authorized_keys
class_user@ip-10-245-129-179:~/.ssh$ cat authorized_keys 
ssh-rsa AAAAB3NzaC1yc2EAAAADAQABAAABAQCEZ5DlDsAI6tNBGaUdqBW45MXhILRfiKjD84ehiOrcWg3pD/TJCwqgkuHk0JDaqtxJCUSDCwPf91rV2WwBvmOoGTdoebOae5OWI1AaYQHAytLDiFNnA4lABelBBDcFrkBtqsRrlS3Aoh0kKd6iDihg6h6/APSGNd531EQ1/KxUsYQz4JC80bYjNJ8BWQ4wjYVvSpwabPctd5Adskp0eA+lk34G46nap5flzJzUjqONHHWlFoZjET21WOvHwruhbN41g+gYouGvlaeEkrUUJ6hVYjVw9ykLoI/1H16B16lrQ71b95NVtxhwiWSXdX9JmDh0FXMv85LsETNaSwx347Pb class-key
ssh-rsa AAAAB3NzaC1yc2EAAAADAQABAAABAQCtY5vvg3Y8m8Ooy6uBpPxIvyWfeN/ByFg98JrlRG3PTMt0/2WLLE+87R8PTZfAfLjmv+7zDwGESi3atqgpSEBJA/Tn+JgDvYrx+bAIjr1hmpG9IZh2hBnzbUItsrnkHqTj4HM/yhkiZuRvnZpdU1ovZUxTQCbblrqAhQoeGJYCcmA3v2d3pBXtvy2xqvkytZ+pyIqOI/UPHD/kxDAy/Z8zOty8YwK4E9VfbmV2rR0qAE1ciKTmxW0PU9mdt5ndHg8HSaz2bJ19GPMUUsy5oVsuH/xMvk9qA7+yd5moHgYvMe7cz/Xri5rzzPvSmfBiaVhQh7NEhlFK/pFHzyJk7PZb ruben.gomez@activenetwork.com
ssh-rsa AAAAB3NzaC1yc2EAAAADAQABAAABAQCqtk9O4mg6fCddXZ8BL9tpupsfTASO+bAdwoqCgy3YxwQbHRkWBW9H80TJGNeBQrNKPUL+Twbb3LsKZutPUDB9EH0PfpkeYFH96TwM67g2X7hLjgxaddvFpecjV2B7V964PAZ+ou07Um99DXRkfCT4Joqt1vwAG3sdoU+K/nc0lCBwb4p4UM2PrssciswmXsxppWyWgr5RkIK+Vm2Ms0E9E5F1jLK4E35tBmb/nlvrjw3oYrwD189DndFccydS4nbbUXJLijFv2A3bzbio0VGXVLZrNaSXO6MRgStSVRr+oGPCuABWirFvi99aQJOvNvbL4eeL+gIJlRTeWZD4fRr5 ruben.gomez@activenetwork.com
class_user@ip-10-245-129-179:~/.ssh$ logout
bash: logout: not login shell: use `exit'
class_user@ip-10-245-129-179:~/.ssh$ exit
exit
ubuntu@ip-10-245-129-179:/home/class_user/.ssh$ logout
Connection to ec2-23-20-131-97.compute-1.amazonaws.com closed.
wl00031016:~ admin$ ssh class_user@ec2-23-20-131-97.compute-1.amazonaws.com
Permission denied (publickey).
wl00031016:~ admin$ ps
  PID TTY           TIME CMD
 2288 ttys000    0:00.03 -bash
wl00031016:~ admin$ ssh class_user@ec2-23-20-131-97.compute-1.amazonaws.com
Permission denied (publickey).
wl00031016:~ admin$ ssh ubuntu@ec2-23-20-131-97.compute-1.amazonaws.com
Welcome to Ubuntu 13.04 (GNU/Linux 3.8.0-19-generic x86_64)

 * Documentation:  https://help.ubuntu.com/

  System information as of Wed Sep 11 15:00:15 UTC 2013

  System load:  0.0               Processes:           68
  Usage of /:   10.5% of 7.75GB   Users logged in:     0
  Memory usage: 35%               IP address for eth0: 10.245.129.179
  Swap usage:   0%

  Graph this data and manage this system at https://landscape.canonical.com/

  Get cloud support with Ubuntu Advantage Cloud Guest:
    http://www.ubuntu.com/business/services/cloud

  Use Juju to deploy your cloud instances and workloads:
    https://juju.ubuntu.com/#cloud-raring

77 packages can be updated.
34 updates are security updates.

Last login: Wed Sep 11 00:08:23 2013 from 66-192-149-18.static.twtelecom.net
ubuntu@ip-10-245-129-179:~$ ls -la
total 36
drwxr-xr-x 4 ubuntu ubuntu 4096 Sep  9 23:08 .
drwxr-xr-x 4 root   root   4096 Sep 10 16:27 ..
-rw------- 1 ubuntu ubuntu 1614 Sep 11 00:11 .bash_history
-rw-r--r-- 1 ubuntu ubuntu  220 Mar 30 15:37 .bash_logout
-rw-r--r-- 1 ubuntu ubuntu 3637 Mar 30 15:37 .bashrc
drwx------ 2 ubuntu ubuntu 4096 Sep  9 23:07 .cache
-rw-r--r-- 1 ubuntu ubuntu  675 Mar 30 15:37 .profile
drwx------ 2 ubuntu ubuntu 4096 Sep 10 15:41 .ssh
-rw------- 1 ubuntu ubuntu  686 Sep  9 23:08 .viminfo
ubuntu@ip-10-245-129-179:~$ la -la .ssh
total 16
drwx------ 2 ubuntu ubuntu 4096 Sep 10 15:41 .
drwxr-xr-x 4 ubuntu ubuntu 4096 Sep  9 23:08 ..
-rw------- 1 ubuntu ubuntu 1213 Sep  9 23:08 authorized_keys
-rw-r--r-- 1 ubuntu ubuntu  444 Sep 10 15:41 known_hosts
ubuntu@ip-10-245-129-179:~$ ls
ubuntu@ip-10-245-129-179:~$ mkdir test
ubuntu@ip-10-245-129-179:~$ ls
test
ubuntu@ip-10-245-129-179:~$ mk
ls

kjlkjlkjlkj^X

^X
Ω
^X
;

mk: command not found
ubuntu@ip-10-245-129-179:~$ ls
test
ubuntu@ip-10-245-129-179:~$ ls
test
ubuntu@ip-10-245-129-179:~$ 
ubuntu@ip-10-245-129-179:~$ kjlkjlkjlkj
ls
^X

;

mkdir
~
^X
≈
q

;
mk:
kjlkjlkjlkj: command not found
ubuntu@ip-10-245-129-179:~$ Ω


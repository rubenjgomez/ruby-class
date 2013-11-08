/ root
/boot
/etc

/etc/passwd
/etc/fstab
/etc/hosts  host, ips
/etc/init.d   start up scripts


/bin
/usr/bin     things that operate ls
/sbin
/usr/sbin 
/uae         user apps, ex. /usr/share/XII
/usr/share/dict       dictionary
/usr/share/doc      documentation files for your system
/usr/hsare/man     manuals
man ls     manual of ls
/usr/src    source files
/usr/local      local installations go.
/usr/local/bin
/var      files that change a lot
/var/log     log files for unix
/var/spool      files queued for process
/lib       library 
/home       independent files go
/temp
/dev       devices
/dev/sda     harddrive on your computer  ->/
/dev/fd0   
/proc      proc directory, 



mkdir test
touch test_file
cd test_file test_file2
cd test/* test_file2
*/
mv test_file test_file_copy

rm test_file_copy
re -r test2
re -rf test2  force deletion without showing promps.
ls /*        */
which ls  where command exist

whoami  which user youre logged in apps
ls --help
man ls
q exits out manual

ls > file_list.txt creates file
cat file_list.txt  see whats in the file
ls / > file_list.txt  overrides files
ls / >> file_list.txt  does not override file
wc -l file_test.txt
sort < file_test.txt   
sort < file_test.txt > files_test.txt
ls | wc -l number of filles
cat files_test.txt | uniq | wc -l
tail reads from the end of the file
cat is printing out the whole file
tail -f  reads and waits for more

cat file_test.txt | grep test         


generate pubilc key
~/.ssh/id_rsa.put



su ubauta   change user
whoami
su   will make you root
sudo rm -rf  sudo will run as root user
echo ~
echo ~root
ls D*
echo $PATH
~/.bash/c
export my_ar=test
echo $MY_VAR
echo $((2+2)) 

echo Front-{A,B,C}-Back    brace expansion
echo nmber_{1..5}

chmod  change permissions
chmod 777 test_file
r=4
w=2
x=1

chmod 777-R test_file     all directories inside directory

chown nbarnes:users test_file        changing ownership

 ssh permissions


create a new user
"class-user"
ssh class-user@server

sudo passwd class_user

Processes

xload      locks up terminal
&      run in the background  ex. xload &
ctrl-z  then  bg          already started but want to run in the bg
jobs
ps          processes currently running
kill 1280      stops process
kill -2 1280    kills immediately 
kill -9 1270     gets rid of the process
ps -ef        a list of all users processes
ps -ef | grep redis
wget
curl
wget  http://....
tarzxf  redis.
configure
make
sudo make install

























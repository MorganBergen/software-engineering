#  web programming

###  contents

1.  [prepare the enviroment](#prepare-the-enviroment)
2.  [practice one:  html eecs profiles](#practice-one--html-eecs-profiles)
3.  [practice two:  css font control](#practice-two-css-font-control)
4.  [practice three:  javascript password verification](#practice-three--javascript-password-verification)
5.  [practice four:  php multiplication table](#practice-four--php-multiplication-table)
6.  [publish your exercises](#publish-your-exercises)

##  prepare the enviroment

-  we need to use the cycle server to finish this lab, and have discussed how to connect to your cycle server at lab 1.  now, lets discuss how to prepare for the enviroment and finish your first page quickly

```bash
m358b583@cycle3:~$ tree -L 1
.
├── Desktop
├── Documents
├── Downloads
├── final-practice.pdf
├── final-practice-sol.pdf
├── Music
├── Pictures
├── Public
├── public_html
├── Templates
└── Videos

9 directories, 2 files
m358b583@cycle3:~$
```

-  after logging into your cycle server, there should be a folder called `public_html`
-  if you dont have a `public_html` you need to create one yourself
-  then open your terminal and execute the following commands in the terminal:

```bash
wget people.eecs.ku.edu/~m358b583/index.html
wget people.eecs.ku.edu/~m358b583/grant_permission.sh
bash gran_permission.sh
```

```bash
m358b583@cycle3:~/public_html$ wget people.eecs.ku.edu/~l367r860/index.html
wget people.eecs.ku.edu/~l367r860/grant_permission.sh
bash grant_permission.sh
--2023-04-09 13:34:00--  http://people.eecs.ku.edu/~l367r860/index.html
Resolving people.eecs.ku.edu (people.eecs.ku.edu)... 129.237.87.16
Connecting to people.eecs.ku.edu (people.eecs.ku.edu)|129.237.87.16|:80... connected.
HTTP request sent, awaiting response... 301 Moved Permanently
Location: https://people.eecs.ku.edu/~l367r860/index.html [following]
--2023-04-09 13:34:00--  https://people.eecs.ku.edu/~l367r860/index.html
Connecting to people.eecs.ku.edu (people.eecs.ku.edu)|129.237.87.16|:443... connected.
HTTP request sent, awaiting response... 200 OK
Length: 422 [text/html]
Saving to: ‘index.html’

index.html                              100%[============================================================================>]     422  --.-KB/s    in 0s

2023-04-09 13:34:00 (189 MB/s) - ‘index.html’ saved [422/422]

--2023-04-09 13:34:00--  http://people.eecs.ku.edu/~l367r860/grant_permission.sh
Resolving people.eecs.ku.edu (people.eecs.ku.edu)... 129.237.87.16
Connecting to people.eecs.ku.edu (people.eecs.ku.edu)|129.237.87.16|:80... connected.
HTTP request sent, awaiting response... 301 Moved Permanently
Location: https://people.eecs.ku.edu/~l367r860/grant_permission.sh [following]
--2023-04-09 13:34:00--  https://people.eecs.ku.edu/~l367r860/grant_permission.sh
Connecting to people.eecs.ku.edu (people.eecs.ku.edu)|129.237.87.16|:443... connected.
HTTP request sent, awaiting response... 200 OK
Length: 147 [application/x-sh]
Saving to: ‘grant_permission.sh’

grant_permission.sh                     100%[============================================================================>]     147  --.-KB/s    in 0s

2023-04-09 13:34:01 (63.1 MB/s) - ‘grant_permission.sh’ saved [147/147]

m358b583@cycle3:~/public_html$ ls
cgi-bin  grant_permission.sh  index.html
m358b583@cycle3:~/public_html$
```


-  after that you will open your browser and visit the following link you made and make sure to change your ku network id to m358b583
-  you will finish the first step if you can visit the following page
-  when creating a new file, you must run the command `bash grant_permission.sh` again.
-  in the index file, four links to our four practices
-  if you want to use the index html file, you must name your html files as `practice1.html`, ... ,`practice4.html`

-  what do the three commands mean? **instructor version**
    -  the first is to download the index file
    -  the second is to download the script
    -  the third is to run the script
    -  so I want you to have an html file and make sure you can access it, it works like a "hello world" program
    -  what does the link **`https://people.eecs.ku/~m358b583/`**
        -  as we know the url is used to reprezent an ip address, which means one or more servers
        -  so `https://people.eecs.ku.edu/` is server `129.237.87.16`
        -  http service default port is 8, so when you access `https://people.eecs.ku.edu/` you are accessing `129.237.86.16.80`
        -  more preiscely, the service running at this port gives you the file `/var/www/html/index.html`
        -  but this files behavior will be based on the following ku network id to forward you to the cycle server `/home/m358b583/public_html` 
        -  that's the reason why you must put your files in this folder
    -  next why do you need to run the script I gave you?
        -  when you access a page using your browser, it just downloads that page, then parses it for you
        -  which means converting the html codes to the page you see.  so you must make sure others can access your files
        -  otherwise they cant visit that page
    -  in sort the script just set permission to 644, so others can access your file
    -  you will find out that even if you don't run the script, you can still access your site because the default permission of a new file is 644, so the script is to make sure the permission is correct

-  what do the three commands mean?  **chat gpt version**
    -  `wget people.eecs.ku.edu/~m358b583/index.html`:  this command uses the `wget` command line utility to download the `index.html` file from the url `people.eecs.ku.edu/~m358b583`.  the `wget` utility is commonly used for downloading files from the internet
    -  `wget people.eecs.ku.edu/~m358b583/grant_permission.sh`:  this command uses `wget` to download the `grant_permission.sh` shell script from the same url
    -  `bash grant_permission.sh`:  this command executes the `grant_permission.sh` script using the `bash` shell.  the script is intended to modify the file permissions of certain files or directories, allowing the user to perform certain operations that would otherwise be restricted.

###  after you set up your enviroment you should have the following

<img src="index-prev.png" width="500px" align="right">

```bash
m358b583@cycle3:~/public_html$ ls -al
total 20
drwxr-xr-x  3 m358b583         48 4096 Apr  9 13:40 .
drwxr-x--x 28 m358b583 m358b583_g 4096 Apr  9 13:40 ..
drwxr-xr-x  2 m358b583         48 4096 Aug 23  2017 cgi-bin
-rw-r--r--  1 m358b583 m358b583_g  147 Apr  9 13:40 grant_permission.sh
-rw-r--r--  1 m358b583 m358b583_g  422 Apr  4 11:49 index.html
m358b583@cycle3:~/public_html$
```

finally, you may find the sit doesn't change after changing your files.  the server needs some time to update and you need to refresh your browser.

##  practice one:  html eecs profiles

-  make a profile page that is styled with css
-  have fun with this and include the following
    -  name
    -  a photo
    -  contact info
    -  showcase anything good for your professional career
    -  courses
    -  projects
    -  work experience
    -  one link 
    -  one video

##  practice two:  css font control

-  create a web page that has a parahraph with some dummy text. 
-  near the paragraph have a field to accept the following values:  red/green/blue values for the paragraph and red/green/blue values for the border
-  you also need to control the width of the border

##  practice three:  javascript password verification

##  practice four:  php multiplication table

##  publish your exercises



























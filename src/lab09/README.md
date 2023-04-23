#  lab09 container programming using docker

###  contents

1.  [objective](#objective)
2.  [deliverable](#deliverable)
3.  [evaluation](#evaluation)
4.  [implementation](#implementation)
5.  [docker](#docker)
6.  [create a web app](#create-a-web-app)
7.  [create a dockerfile](#create-a-dockerfile)
8.  [build the docker image](#build-the-docker-image)
9.  [run the docker container](#run-the-docker-container)
10. [test the web app](#test-the-web-app)
11. [manage your docker image/conatiner](#manage-your-docker-image/container)
12. [push the docker image to a registry](#push-the-docker-image-to-a-registry)
13. [write a c program](#write-a-c-program)
14. [create a dockerfile](#create-a-dockerfile)
15. [build the docker image](#build-the-docker-image)
16. [run the docker container](#run-the-docker-container)
17. [push the docker image to a registry](#push-the-docker-image-to-a-registry)
18. [submit the docker link](#submit-the-docker-link)

###  objective

learn the basics of docker programming

###  deliverable

-  a link to your github repository
-  another link to your Docker Hub repository.

###  evaluation

-  docker installation [10 points]
-  task 1 - dockerize a web application [15 points]
-  task 2 - dockerize a C program [10 points]
-  task 3 - publish to github and docker dub [5 points]

#  implementation

## docker

view [docker.com](https://www.docker.com/resources/what-container/) here.  a container is a standard unit of software that packages up code and all its dependencies so the application runs quickly and reliably from one computing enviroment to another.  a docker conatiner image is a lighweight standalone, executable package of software that includes everything needed to run the application:  code, runtime, system tools, system libraries, and settings.  

container images become a container at runtime and in the case of docker containers 

<div style="text-align:center;">
  <img src="./assets/conatiner.webp" width="400px">
</div>

test that docker is working by opening a terminal or command prompt and running the command docker version.  the output you provided shows both the docker client and server (docker desktop) information, indicating that the client is able to communicate with the Docker daemon successfully.

```bash
❯ docker version
Client:
 Cloud integration: v1.0.31
 Version:           20.10.24
 API version:       1.41
 Go version:        go1.19.7
 Git commit:        297e128
 Built:             Tue Apr  4 18:21:21 2023
 OS/Arch:           darwin/arm64
 Context:           default
 Experimental:      true

Server: Docker Desktop 4.18.0 (104112)
 Engine:
  Version:          20.10.24
  API version:      1.41 (minimum version 1.12)
  Go version:       go1.19.7
  Git commit:       5d6db84
  Built:            Tue Apr  4 18:17:07 2023
  OS/Arch:          linux/arm64
  Experimental:     false
 containerd:
  Version:          1.6.18
  GitCommit:        2456e983eb9e37e47538f59ea18f2043c9a73640
 runc:
  Version:          1.1.4
  GitCommit:        v1.1.4-0-g5fd4c4d
 docker-init:
  Version:          0.19.0
  GitCommit:        de40ad0
````

## create a web app

create a simple web application using html, css, javascript, php. you can use any code editor or ide of your choice. save the files in a directory. 

## create a dockerfile

a dockerfile is a text file that conatins instructions for building a docker image.  create a file named "Dockerfile" in the same lab9 directory.  copy the following code into the file

```dockerfile
FROM php:7.4-apache
COPY ./var/www/html/
EXPOSE 80
```

-  `FROM php:7.4-apache`  this line specifies the base image that we will use to build our new image.  in this case, we are using the offical pho 7.4 image that comes with the apache web server.

-  `COPY ./var/www/html/` copies the contents of the curreent directory (the . symbol) to the `/var/www/html/` directory inside the container.  this is where apache looks for files to serve over the web.

-  `EXPOSE 80`  this tells docker that our conatiner will be listening on port 80, which is the default port for the http traffic 

## build the docker image

open a terminal or command prompt and navigate to the directory and run the following command to build the docker image -> `docker build -t mywebapp`.

```zsh
❯ docker build -t mywebapp .
[+] Building 1.0s (7/7) FINISHED
=> [internal] load build definition from Dockerfile                                                0.0s
=> => transferring dockerfile: 131B                                                                0.0s
=> [internal] load .dockerignore                                                                   0.0s
=> => transferring context: 2B                                                                     0.0s
=> [internal] load metadata for docker.io/library/php:7.4-apache                                   0.9s
=> [internal] load build context                                                                   0.1s
=> => transferring context: 5.15MB                                                                 0.1s
=> CACHED [1/2] FROM docker.io/library/php:7.4-apache@sha256:c9d7e608f73832673479770d66aacc810001  0.0s
=> [2/2] COPY . /var/www/html/                                                                     0.0s
=> exporting to image                                                                              0.0s
=> => exporting layers                                                                             0.0s
=> => writing image sha256:78719749dafb6dbc428d40742406d1bc688cc04bf8a8a68b11750e6cc61b84df        0.0s
=> => naming to docker.io/library/mywebapp                                                         0.0s

~/Documents/2023spring/eecs348/software-engineering/src/lab09/src master !8 ?6               01:34:52 PM
```

## run the docker container

run the following command to start a docker container from the "mywebapp" image ->`docker run -d -p 8080:80 --name mywebapp-container mywebapp`

```zsh
❯ docker run -d -p 8080:80 --name mywebapp-container mywebapp
875965edf79fd7d19e3c33933a424d7c7fd21e91a3227366daf235106e6abb39

~/Documents/2023spring/eecs348/software-engineering/src/lab09/src master !8 ?6               01:34:52 PM
```

this command will start a docker conatiner named "mywebapp-container" from the "mywebapp" image, map port 8080 on the host machine to port 80 in the conatiner and run teh conatiner in detached mode.

```zsh
❯ docker build -t mywebapp .
[+] Building 0.9s (7/7) FINISHED
 => [internal] load build definition from Dockerfile                                                0.0s
 => => transferring dockerfile: 131B                                                                0.0s
 => [internal] load .dockerignore                                                                   0.0s
 => => transferring context: 2B                                                                     0.0s
 => [internal] load metadata for docker.io/library/php:7.4-apache                                   0.7s
 => [internal] load build context                                                                   0.0s
 => => transferring context: 36.55kB                                                                0.0s
 => CACHED [1/2] FROM docker.io/library/php:7.4-apache@sha256:c9d7e608f73832673479770d66aacc810001  0.0s
 => [2/2] COPY . /var/www/html/                                                                     0.0s
 => exporting to image                                                                              0.0s
 => => exporting layers                                                                             0.0s
 => => writing image sha256:394d68235c20d62504b0a1f17e0e92851dcc1ae72421785a0f8707fb15610a57        0.0s
 => => naming to docker.io/library/mywebapp                                                         0.0s
❯ docker run -d -p 8080:80 --name mywebapp-container mywebapp
4b8ad593d2fce2110d21e7d5030e5515e180c0e1cd8ebc9c57ded4098ae188ee
❯ docker ps -a
CONTAINER ID   IMAGE      COMMAND                  CREATED          STATUS          PORTS                  NAMES
4b8ad593d2fc   mywebapp   "docker-php-entrypoi…"   13 seconds ago   Up 12 seconds   0.0.0.0:8080->80/tcp   mywebapp-container

~/Documents/2023spring/eecs348/software-engineering/src/lab09/src master !8 ?7                                                                                                                           01:42:27 PM
````

## test the web app

open a web browser and navigate to `http://localhost:8080` to test the web application.  you should be able to see the web page that you created in step 2

[`http://localhost:8080`](http://localhost:8080) or [http://127.0.0.1:8080](http://127.0.0.1:8080)

note that this url refers to a network service running on the same machine where the browser is being used.  in this case, it is pointing to a web app running inside the docker container.  `localhost` is an alias for the ip address `127.0.0.1` which is a loopback address that always points to the same machine it is being accessed from.  the `:8080` part is the port number where the service is running.  for someone else on a different computer to access your web app, you need to provide them with your computer's ip address on the local network or your public ip address if they are on a different network (such as the internet).  however, exposing a service to the internet may have security implications.  if you want to make the application available to a broder audience on the internet, you can deploy it on a cloud provider.

##  manage your docker image/conatiner

-  `docker stop mywebapp-container`     to stop the container docker 
-  `docker start mywebapp-container`    to start the container
-  `docker restart mywebapp-container`  to restart the container
-  `docker kill mywebapp-container`     to kill the container
-  `docker rm mywebapp-container`       to delete the container
-  `docker images`                      to view the docker images docker images
-  `docker ps`                          to view the running containers docker ps
-  `docker ps -a`                       to view all the containers docker ps -a
-  `docker rmi mywebapp`                to delete the docker image docker rmi mywebapp

note that,

-  `mywebapp-conatiner` is the name of the container
-  `mywebapp` is the name of the docker image

## push the docker image to a registry

-  sign up for a docker hub account if you don't have one already.  run the following commands to push the docker image to docker hub.  `mywebapp` is the name of your image, and `src_docker` is the name of your repository.

###  template
```
docker login 
docker tag mywebapp <username>/<image-name>:<tag-name>
docker push <username>/<image-name>:<tag-name>
docker logout
```

###  actual
```
docker login
docker tag mywebapp morganbergen/src_docker:view
docker push morganbergen/src_docker:view
docker logout
```

###  output

```
❯ docker login
docker tag mywebapp morganbergen/src_docker:view
docker push morganbergen/src_docker:view
docker logout
Authenticating with existing credentials...
Login Succeeded

Logging in with your password grants your terminal complete access to your account.
For better security, log in with a limited-privilege personal access token. Learn more at https://docs.docker.com/go/access-tokens/
The push refers to repository [docker.io/morganbergen/src_docker]
7c4e9daf9513: Pushed
817fbac6b957: Mounted from library/php
f68f230dd575: Mounted from library/php
95df1534b444: Mounted from library/php
57f98ba838a0: Mounted from library/php
15d703f5bc12: Mounted from library/php
81d981d761ce: Mounted from library/php
952c73c7ad3c: Mounted from library/php
90867d0da86a: Mounted from library/php
b2f3add5bb27: Mounted from library/php
4aad40cd409b: Mounted from library/php
4a9b2f3b684b: Mounted from library/php
323963f5801b: Mounted from library/php
acef1b1c001e: Mounted from library/php
view: digest: sha256:b5be1128b2b126b01ccdaddbbd8a7bd3e8ccdf6be8713d0b58c7be58a8574dad size: 3246
Removing login credentials for https://index.docker.io/v1/
```

after pushing your docker image from the docker hub registry and run them using the commands below.

###  template
```
docker pull <username>/<image-name>:<tag>
docker run -p 8080:80 <username>/<image-name>:<tag>
```

###  actual
```
docker pull morganbergen/src_docker:view
docker run -p 8080:80 morganbergen/src_docker:view
```

## write a c program

provide a c program and save it in a directory

## create a dockerfile

create a file named Dockerfile in the same directory

## build the docker image

## run the docker container

## push the docker image to a registry

## submit the docker link



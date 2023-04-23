# set the base image to use
FROM gcc:latest

# copy the c program into the container
COPY main.c /app/main.c

# set the working directory
WORKDIR /app

# compile the c program
RUN gcc -o main main.c

# set the command to run when the container starts
CMD ["./main"]


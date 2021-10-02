# 4 step are there

## step 1
### prepare:
	installing packages required

## step 2
### up:
	Running docker-compose.yml and Dockerfile
	Creating mysql connection with php and printing the client and server version

## step 3
### down:
	Stoping all running containers
	Storing all usefull files in <your_current_directory_path>/docker/*

## step 4
### teardown:
	Deleting all file present in <your_current_directory_path>/docker/*

1) To begin with it just run <code>make</code> in this folder. it will do everything automatically.
2) <b>RUNNING SQL SERVER TAKES TIME</b> You can check its status by <code>docker logs db -f</code> press CTRL+C to exit.
3) After SQL server is ready to connect, at <a href="http://localhost:3000"><code>localhost:3000</code></a> will print client-server version.
4) For testing purpose step 1 and step 2 will run by default.
5) you can add all step in <b>makefile</b> by <code>all: up teardown</code>

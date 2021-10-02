all: up
prepare: 
	@echo "\n-----------------checking for depedencies------------------\n"
	@sudo apt-get update
	@sudo apt install -y docker.io
	@sudo apt install -y docker-compose
	@sudo systemctl enable --now docker
	@echo "\n----------------------------------------------------------- \n"
up: prepare
	@echo "\n------------------starting your container------------------\n"
	@#! /bin/bash
	@if [ ! -d docker ]; then\
		mkdir docker;\
		if [ ! -d www ]; then\
			cd docker ;\
			mkdir www && cd ../../ ;\
		fi ;\
	fi
	@sudo cp ./index.php ./docker/www/;
	@sudo docker-compose up -d
	@echo "\n----------------------------------------------------------- \n"
teardown: down
	@echo "\n------------------removing your files----------------------\n"
	@sudo rm -rf ./docker
	@echo "\n----------------------------------------------------------- \n"
down:
	@echo "\n------------------stoping all services---------------------\n"
	@sudo docker-compose down
	@echo "\n----------------------------------------------------------- \n"

#!/bin/bash

# Code copied from https://docs.docker.com/engine/install/debian/ 

echo "installing apt-repo and keyrings ..."
# Add Docker's official GPG key:
sudo apt-get update >/dev/null 
sudo apt-get install ca-certificates curl gnupg >/dev/null
sudo install -m 0755 -d /etc/apt/keyrings >/dev/null
curl -fsSL https://download.docker.com/linux/debian/gpg | sudo gpg --dearmor -o /etc/apt/keyrings/docker.gpg >/dev/null
sudo chmod a+r /etc/apt/keyrings/docker.gpg >/dev/null

# Add the repository to Apt sources:
echo \
  "deb [arch="$(dpkg --print-architecture)" signed-by=/etc/apt/keyrings/docker.gpg] https://download.docker.com/linux/debian \
  "$(. /etc/os-release && echo "$VERSION_CODENAME")" stable" | \
  sudo tee /etc/apt/sources.list.d/docker.list > /dev/null
sudo apt-get update >/dev/null

sudo apt-get install -Y docker-ce docker-ce-cli containerd.io docker-buildx-plugin docker-compose-plugin >/dev/null


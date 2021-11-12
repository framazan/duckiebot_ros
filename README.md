# Basic Robotics Coding: This repository provides some examples of how to use the duckietown robotics environment.
This contains python files that allow a duckiebot to drive autonomously, in some cases, and in other controlled
by user input.

This reposotiry uses ROS, python, docker, and xml.

**NOTE:** If you want to develop software that does not use
ROS, check out [this template](https://github.com/duckietown/template-basic).


## How to use it

### 1. Fork this repository

Use the fork button in the top-right corner of the github page to fork this repository.


### 2. Create a new repository

Create a new repository on github.com while
specifying the newly forked repository as
a template/boilerplate for your new repository.


### 3. Define dependencies

List the dependencies in the files `dependencies-apt.txt` and
`dependencies-py3.txt` (apt packages and pip packages respectively).


### 4. Place your code

Place your code in the directory `/packages/` of
your new repository, or edit the one already in
the folder.


### 5. Setup launchers

The directory `/launchers` can contain as many launchers (launching scripts)
as you want. A default launcher called `default.sh` must always be present.

If you create an executable script (i.e., a file with a valid shebang statement)
a launcher will be created for it. For example, the script file 
`/launchers/my-launcher.sh` will be available inside the Docker image as the binary
`dt-launcher-my-launcher`.

When launching a new container, you can simply provide `dt-launcher-my-launcher` as
command.

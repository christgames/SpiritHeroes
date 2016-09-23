# Spirit Heroes by ChristGames.org
***
### Information
This is a 3D game created in Unreal Engine 4.x. It is a complementary media project for the book series written by **Erica Bertram** [http://www.spiritheroes.net/](http://www.spiritheroes.net).

### License
**MIT** - [https://opensource.org/licenses/MIT](https://opensource.org/licenses/MIT)

## Setting up Windows development environment

### Download
Download each of these required components. **You will need about 10gb free for all of these files.** *(Depending upon your download speed, this can take several hours to complete.)*

* **Unreal 4.x (Latest version)** - [https://www.unrealengine.com/](https://www.unrealengine.com/)

* **Spirt Heroes Code** - (Use **Git** to download) [https://github.com/christgames/SpiritHeroes](https://github.com/christgames/SpiritHeroes)

### Install

Follow these steps for installing each component.

##### Unreal Engine

* Install with defaults

##### Git

* Install with defaults

### Import and Compile

* Open **SpiritHeroes.uproject** with Unreal engine. Levels are **Level01.umap** through **Level05.umap**.

### Testing

* Press play button in Unreal Engine

##### Spirit Heroes Source Code

## GitHub

##### Overview

* **ChristGames.org** uses **GitHub**, for storing game source code and some assets. It is **free** to use for Open Source projects. 
* Contact <doug@christgames.org> and ask to be added as a contributor if you would like to help with the project.
* Go to [https://github.com/](https://github.com) and open an account and then download the latest version of the **Git Bash** client here [http://git-scm.com/downloads](http://git-scm.com/downloads). ***Install the Git client with defaults settings***.
* You can also use the **GitHub GUI client for Windows** from this site [http://windows.github.com/](http://windows.github.com/). Refer to the online documentation for using this client.
* We will focus on the standard command line **Git Bash** client for the remaining instructions.

##### First Time Download and Initialization

* Run the **Git Bash** console program. You should should have an icon on your desktop when it was installed.
* Enter each of these commands in the **Git Bash** console. Replace the name and email details in "" with your information.
<pre>
	cd /c/ChristGames/Projects
	git config --global user.name "Doug"
	git config --global user.email "Doug@ChristGames.org"
	git init
	git clone "https://github.com/christgames/SpiritHeroes.git"
</pre>
* You should see several messages as the files are copied from **GitHub** to your local computer. This files can be found in **c:\ChristGames\Projects\SpiritHeroes**.  Congratulations, you now have a full copy of the latest source code for this game!

##### Pushing files to GitHub

* Run the **Git Bash** console program.
* Enter these commands.
<pre>
	cd /c/ChristGames/Projects/SpiritHeroes
	git add SomefileName
	git commit -m "Some Comment"
	git push origin master
</pre>
* Replace **SomeFileName** with the file you modified. You can also use folder names too
* Make sure you **add meaningful comments** for all changes so it is clear what was updated or added.
* Once you submit the **git push** command, you will be prompted for your user name and password. This is the account you setup on **GitHub**.

##### Pulling files from GitHub

* Run the **Git Bash** console program.
* Enter these commands to get the latest updates.
<pre>
	cd /c/ChristGames/Projects/SpiritHeroes
	git pull origin
</pre>

* You can also force a file to be downloaded from **GitHub** if it was deleted on you local computer with this command.
<pre>
	git checkout SomeFileName
</pre> 
##### GitHub - Final Words

* This document is only a starter for **Git** and **GitHub** commands and concepts. Please refer to other documents and tutorials if you wish to be well versed in the technology. 
* You have full rights to modify any files on the ChristGames.org **GitHub** repository. Please keep our folders clean and organized. 
* Only source code should be stored on **GitHub**. Some binary data can also be stored, but limited in size. There is a **1GB** limit for free projects. That is plenty of room for even large game code.

### Reference Links

* **Spirit Heroes** - [http://www.wordfamily.faith/shop](http://www.wordfamily.faith/shop)
* **ChristGames.org** - [http://christgames.org/](http://christgames.org/)
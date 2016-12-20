# Spirit Heroes by ChristGames.org
***
### Information
This is a 3D game created in Unreal Engine 4.x. It is a complementary media project for the book series written by **Erica Bertram** [http://www.spiritheroes.net/](http://www.spiritheroes.net).

### License
**MIT** - [https://opensource.org/licenses/MIT](https://opensource.org/licenses/MIT)

## Setting up development environment

### Download
Download each of these required components. **You will need about 10gb free for the minimum install. 20gb is recommended for all files and components. ** *(Depending upon your download speed, this can take several hours to complete.)*

* **Unreal 4.x (Latest version)** - [https://www.unrealengine.com/](https://www.unrealengine.com/)

* **Spirt Heroes Code** - (Use **Git** to download) [https://github.com/christgames/SpiritHeroes](https://github.com/christgames/SpiritHeroes)

### Install
*(You can use either Windows or MAC Operating Systems. The differences are mentioned in each section below.)*

Follow these steps for installing each component.

##### Unreal Engine

* Install with defaults (Make sure starter content and templates are checked.)

##### Git

* Install with defaults (See GitHub section below for details.)

##### Level Files

* The Unreal engine stores all assets in a file alled ".umap" per level. This file tends to be very large; in the multi gigabyte range. GitHub only allows 100mb files and has a 1GB maximum size limit. To accomodate this, we only store sample level files on GitHub. The master level files are stored on Christ Games FTP repository. You can download all *.umap files here with your browser. [http://www.christgames.org/ftp/games/index.php?dir=projects/spiritheroes/assets/levels](http://www.christgames.org/ftp/games/index.php?dir=projects/spiritheroes/assets/levels). Copy them into your Content folder after getting the main files from GitHub.

##### Additional Files

* We are also storing the original mesh ".blend" **Blender** source files on our FTP servers along with any image and other large asset files we import into the engine. Please copy the **meshes** and **import** folders [http://www.christgames.org/ftp/games/?dir=projects%2Fspiritheroes](http://www.christgames.org/ftp/games/?dir=projects%2Fspiritheroes) to your root projects folder for a complete copy of all source files for the game.

### Import and Compile

* Open **SpiritHeroes.uproject** with Unreal engine. Levels are **Level01.umap** through **Level05.umap**.

### Testing

* Press play button in Unreal Engine

## GitHub

##### Overview

* **ChristGames.org** uses **GitHub**, for storing game source code and some assets. It is **free** to use for Open Source projects.
* Contact <doug@christgames.org> and ask to be added as a contributor if you would like to help with the project.
* Go to [https://github.com/](https://github.com) and open an account and then download the latest version of the **Git Bash** client here [http://git-scm.com/downloads](http://git-scm.com/downloads). ***Install the Git client with defaults settings***.
* You can also use the **GitHub GUI client for Windows/Mac** from this site [https://desktop.github.com/](https://desktop.github.com/). Refer to the online documentation for using this client.
* We will focus on the standard command line **Git Bash** client for the remaining instructions.

##### First Time Download and Initialization

* Run the **Git Bash** console program for Windows. You should should have an icon on your desktop when it was installed. (Use the built-in Terminal application for Mac.)
* Enter each of these commands in the **Git Bash** console. Replace the name and email details in "" and [] with your information.
<pre>
	Windows
	cd /c/ChristGames/Projects

	Mac
	cd /Users/[username]/Documents/ChristGames/Projects

	git config --global user.name "Doug"
	git config --global user.email "Doug@ChristGames.org"
	git init
	git clone "https://github.com/christgames/SpiritHeroes.git"
</pre>
* You should see several messages as the files are copied from **GitHub** to your local computer. This files can be found in **.../Projects/SpiritHeroes**.  Congratulations, you now have a full copy of the latest source code for this game!

##### Pushing files to GitHub

* Run the **Git Bash** console program for Windows or the built-in Terminal application for Mac.
* Enter these commands.
<pre>
	Windows
	cd /c/ChristGames/Projects/SpiritHeroes

	Mac
	cd /Users/[username]/Documents/ChristGames/Projects/SpiritHeroes

	git add SomefileName
	git commit -m "Some Comment"
	git push origin master
</pre>
* Replace **SomeFileName** with the file you modified. You can also use folder names too
* Make sure you **add meaningful comments** for all changes so it is clear what was updated or added.
* Once you submit the **git push** command, you will be prompted for your user name and password. This is the account you setup on **GitHub**.

##### Pulling files from GitHub

* Run the **Git Bash** console program for Windows or the built-in Terminal application for Mac.
* Enter these commands to get the latest updates.
<pre>
	Windows
	cd /c/ChristGames/Projects/SpiritHeroes

	Mac
	cd /Users/[username]/Documents/ChristGames/Projects/SpiritHeroes

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

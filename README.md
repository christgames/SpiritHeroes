# Spirit Heroes by ChristGames.org
***
### Information
This is a 2D game written in C++ using the Cocos2d-x library. It is a complementary media project for the book series written by **Erica Bertram** [http://www.spiritheroes.net/](http://www.spiritheroes.net).

### License
**MIT** - [http://opensource.org/licenses/MIT](http://opensource.org/licenses/MIT)

## Setting up Windows development environment (Windows 7/8)

### Download
Download each of these required components. **You will need about 10gb free for all of these files.** *(Depending upon your download speed, this can take several hours to complete.)*

* **Cocos2d-x library** - (3.x version / not 2.x) [http://cocos2d-x.org/](http://cocos2d-x.org/)
* **Microsoft .NET Framework** (4.5.1 version or better) [http://www.microsoft.com/en-us/download/details.aspx?id=40779](http://www.microsoft.com/en-us/download/details.aspx?id=40779) 
* **Visual Studio Express** - (version 2013) [http://www.microsoft.com/en-us/download/details.aspx?id=40787](http://www.microsoft.com/en-us/download/details.aspx?id=40787)
	* Update 2 RC - [http://www.microsoft.com/en-us/download/details.aspx?id=42307](http://www.microsoft.com/en-us/download/details.aspx?id=42307)
* **Spirt Heroes Code** - (Use **Git** to download) [https://github.com/christgames/SpiritHeroes](https://github.com/christgames/SpiritHeroes)

### Install

Follow these steps for installing each component.

##### COCOS2DX

* Unzip **cocos2d-x-3.0???.zip** and copy these three folders to
	* **c:\ChristGames\Projects\SpiritHeroes\cocos2d\cocos**
	* **c:\ChristGames\Projects\SpiritHeroes\cocos2d\extensions**
	* **c:\ChristGames\Projects\SpiritHeroes\cocos2d\external**

##### Microsoft .NET Framework

* Version **4.5.1** of the **.NET Framework** is included with **Windows 8.1**. You should not have to install it if your Operating System is already upgraded.
* Install **NDP451-KB2858728-x86-x64-AllOS-ENU.exe** with all defaults.

##### VS Express

* Install **wdexpress\_full.exe**, or **VS2013\_RTM\_DskExp\_ENU.iso**, if you downloaded the CD image file.
* Select all default options and **Launch** Visual Studio.
* Go to **Help** and then **Register Product**. *(You will need to sign in or register to get a license. Please note, the license is **free** for the **Express** version of Visual Studio.)*
* Install Update #2 **VS2013.2 RC.exe** with all defaults.

### Import and Compile

* Open **c:\ChristGames\Projects\SpiritHeroes\proj.win32\SpiritHeroes.sln** solutions file with **Visual Studio**.
* Convert three projects (**libAudio**, **libchipmunk**, and **libcocos2d**) from version **VS 2010** to **VS 2013**.
	* You may be prompted to do this when you open the solutions file for the first time.
	* To manually upgrade, **right click** on the project name in the solutions explorer and select "**Upgrade...**".
* Select the **BUILD** menu and **Clean Solution**.
* Select the **BUILD** menu and **Build Solution**.

### Testing

* Select **Debug** or **Release** from the drop down option at the top of the menus next to **Win32**.
* Select **DEBUG** menu and **Start Debugging** option. The game will then start. 
* You will also need to copy the contents of **c:\ChristGames\Projects\SpiritHeroes\Resources** to **..\proj.win32\Debug.win32** or **..\proj.win32\Release.win32** folders if your run the **.EXE** directly.


##### Spirit Heroes Source Code

* ChristGames.org source code is stored on **GitHub**. Follow the steps in the section below to setup your computer to download and upload files to this site.

## Setting up Android development environment (Windows 7/8)

### Download
Download each of these required components. **You will need about 10gb free for all of these files.** *(Depending upon your download speed, this can take several hours to complete.)*

* **Cocos2d-x library** - (3.x version / not 2.x) [http://cocos2d-x.org/](http://cocos2d-x.org/)
* **Java SE - JDK** - (version 7+ - Windows x64) [http://www.oracle.com/technetwork/java/javase/downloads/index.html](http://www.oracle.com/technetwork/java/javase/downloads/index.html)
* **Android SDK** - (latest 64 bit version) [http://developer.android.com/sdk/index.html](http://developer.android.com/sdk/index.html)
* **Android NDK** - (latest 64 bit version) [http://developer.android.com/tools/sdk/ndk/index.html](http://developer.android.com/tools/sdk/ndk/index.html)
* **Python** (2.7.x version / not 3.x) [https://www.python.org/downloads/](https://www.python.org/downloads/)
* **Spirt Heroes Code** - (Use **Git** to download) [https://github.com/christgames/SpiritHeroes](https://github.com/christgames/SpiritHeroes)

### Install

Follow these steps for installing each component. 

##### COCOS2DX

* Unzip **cocos2d-x-3.0???.zip** and copy these three folders to
	* **c:\ChristGames\Projects\SpiritHeroes\cocos2d\cocos**
	* **c:\ChristGames\Projects\SpiritHeroes\cocos2d\extensions**
	* **c:\ChristGames\Projects\SpiritHeroes\cocos2d\external**

##### Java JDK

* Install **Java JDK** to **c:\Program Files\Java\jdk**.
* Install **Java JRE** to **c:\Program Files\Java\jre** (default);
* Add environment varialbe **JAVA\_HOME=c:\Program Files\Java\jdk**.

##### Android SDK

* Unzip **adt-bundle-windows-x86\_64-???.zip** and copy these files and folders to
	* **c:\adt-bundle\eclipse**
	* **c:\adt-bundle\sdk**
	* **c:\adt-bundle\SDK Manager.exe**
* Add environment variable **ANDROID\_SDK\_ROOT=c:\adt-bundle\sdk**.
* Right Click on **c:\adt-bundle\eclipse\eclipse.exe** and make an icon on your desktop and call it **Eclipse**.

##### Android NDK

* Unzip **android-ndk-???-windows-x86\_64.zip** and copy thes files and folders to
	* **c:\android-ndk\\***
	* **c:\android-ndk\build**
	* **c:\android-ndk\docs**
	* **c:\android-ndk\platforms**
	* **c:\android-ndk\prebuilt**
	* **c:\android-ndk\samples**
	* **c:\android-ndk\sources**
* Add environment variable **NDK\_ROOT=c:\android-ndk**.

##### Python

* Execute **python-2.7.?.msi** and install for **all users** in **c:\Python27** folder.
* Choose default options when prompted.

##### Spirit Heroes Source Code

* ChristGames.org source code is stored on **GitHub**. Follow the steps in the section below to setup your computer to download and upload files to this site.

### Import and Compile

* Run **Eclipse** *(desktop icon from previous steps)* 
* Use **c:\ChristGames\Workspace** for the default workspace directory. Check the option "Use this as the default and do not ask again".
* Go to **File** and then **Import**, and then **Android** and **Existing Android code into Workspace**.
* Click the **Browse** button and navigate to **c:\ChristGames\Projects\SpiritHeroes\proj.android** folder and press **Finish**.
* Go to **File** and then **Import**, and then **Android** and **Existing Android code into Workspace**. 
* Click the **Browse** button and navigate to **c:\ChristGames\Projects\SpiritHeroes\cocos2d\cocos\2d\platform\android** folder and press **Finish**.
* Close the **Welcome!** screen window to see the **Package Explorer**. 
* Go to the **Window** menu and then **Android SDK Manager**.
	* Check **Android 2.3.3 (API 10)** and all packages below it.
	* Leave other default packages checked.
	* Press **Install "X" Packages** button.
	* Accept the license to download the packages. *(Occasionally the download might stop for a file lock conflict. When this happens, kill the last running Java process in Task Manager to continue the download process.)*
* Once all packages have downloaded, select/highlight the **SpiritHeroes** project in the **Package Explorer** window.
* Click on the **Project** menu and the **Properties** option.
* Select **Android** from the list on the left.
* Select **Android 2.3.3** in the **Project Build Target**.
* Press the **Apply** button first, then the **OK** button.
* Double-Click on **build_native.py** file under the **SpiritHeroes** project under **Package Explorer** *(This will compile the source code)*.

### Testing

##### Emulators and physical devices

* Testing can be done using software emulators or actual Android devices connected via a USB cable.
* **Please note, software emulators often do NOT work well and are very slow. If available, it is better to use a real Android device for testing.**
* Follow this link to download the USB drivers and instructions for your device. [http://developer.android.com/sdk/win-usb.html](http://developer.android.com/sdk/win-usb.html) 

##### Running the game

* Click on/*hightlight* **SpiritHeroes** package under **Package Explorer** and then select **Run** menu and **Run As** option and **Android Application**.
* Running the game will also create **..\proj.android\bin\SpiritHeroes.apk**. This file will be copied and installed on your device, and then automatically started.
	* You can also manually copy the **.apk** file to a device via **sideloading**. You will need to enable this option on your device if you want to manually install and run.

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
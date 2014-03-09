# Spirit Heroes by ChristGames.org
***
### Information
This is a 2D game written in C++ using the Cocos2d-x library. It is a complementary media project for the book series written by **Erica Bertram** [http://www.spiritheroes.net/](http://www.spiritheroes.net).

### License
**MIT** - [http://opensource.org/licenses/MIT](http://opensource.org/licenses/MIT)

### Setting up Android development environment (Windows 7/8)

### Download
Download each of these required components. **You will need about 10gb free for all of these files.** *(Depending upon your download speed, this can take several hours to complete.)*

* **Cocos2d-x library** - (2.x version / not 3.0) [http://cocos2d-x.org/](http://cocos2d-x.org/)
* **Java SE - JDK** - (version 7+ - Windows x64) [http://www.oracle.com/technetwork/java/javase/downloads/index.html](http://www.oracle.com/technetwork/java/javase/downloads/index.html)
* **Android SDK** - (latest version) [http://developer.android.com/sdk/index.html](http://developer.android.com/sdk/index.html)
* **Android NDK** - (latest 64 bit version) [http://developer.android.com/tools/sdk/ndk/index.html](http://developer.android.com/tools/sdk/ndk/index.html)
* **Cygwin** - (setup-x86_64.exe) [http://cygwin.com/](http://cygwin.com/)
* **Spirt Heroes Code** - (Use **Git** to download) [https://github.com/christgames/SpiritHeroes](https://github.com/christgames/SpiritHeroes)

### Install

Follow these steps for installing each component. 

##### COCOS2DX

* Unzip **cocos2d-x-2.???.zip** and copy these folders to **c:\ChristGames**.
	* **c:\ChristGames\cocos2dx**
	* **c:\ChristGames\CocosDenshion**
	* **c:\ChristGames\extensions**
	* **C:\ChristGames\external**
	* **c:\ChristGames\scripting**
* Add environment variable **COCOS2DX\_ROOT=c:\ChristGames\cocos2dx**.

##### Java JDK

* Install **Java JDK** to **c:\Program Files\Java\jdk**.
* Install **Java JRE** to **c:\Program Files\Java\jre** (default);
	* Add environment varialbe **JAVA_HOME=c:\Program Files\Java\jdk**.

##### Android SDK

* Unzip **adt-bundle-windows-x86\_64-???.zip** and copy these files and folders to **c:\adt-bundle**.
	* **c:\adt-bundle\eclipse**
	* **c:\adt-bundle\sdk**
	* **c:\adt-bundle\SDK Manager.exe**
* Add environment variable **ANDROID\_SDK\_ROOT=c:\adt-bundle\sdk**.
* Right Click on **c:\adt-bundle\eclipse\eclipse.exe** and make an icon on your desktop and call it **Eclipse**.

##### Android NDK

* Unzip **android-ndk-???-windows-x86\_64.zip** and copy thes files and folders to **c:\android-ndk**.
	* **c:\android-ndk\\***
	* **c:\android-ndk\build**
	* **c:\android-ndk\docs**
	* **c:\android-ndk\platforms**
	* **c:\android-ndk\prebuilt**
	* **c:\android-ndk\samples**
	* **c:\android-ndk\sources**
* Add environment variable **NDK\_ROOT=c:\android-ndk**.

##### Cygwin

* Run Cygwin **setup-x86\_64.exe** and follow these steps.
	* Select **Install from Internet**.
	* **c:\Cygwin64** (default) and **RECOMMENDED**.
	* Local Package Directory **c:\Cygwin64** (change default).
	* Direct Connection
	* Pick any mirror site
	* Pick these packages to install **autoconf**, **automake**, **binutils**, **gcc-core**, **gcc-g**, **gdb**, **pcre**, **gawk**, and **make**.
	* Selecting packages is **very awkward** in Cygwin. Follow these helpful tips.
		* Click the **View** button to change to **"Full"** mode.
		* Enter the package name from above in the **Search** prompt. This will filter the packages to just that name.
		* Click on **Skip** once under New column. This will select the latest version. Select all packages listed.
		* Search for the next package group and repeat the selection by clicking **Skip** once. Select all packages listed.
		* **Please note**, you may see some packages listed with **Keep** or a version number instead of **Skip**. That means you have already selected them from a previous package. You do not have to select them again.
		* After all bundled packages have been selected from the list above, press the **Next** button to continue and download them.
		* If you missed downloading a package, you can run **setup-x86\_64.exe** again to get them.
		* Complete the rest of the setup with defaults.
* Add the **bin** folder to the end of the **PATH** environment variable **;c:\Cygwin64\bin**. *(This environment variable should already exist).*

##### Spirit Heroes Source Code

* ChristGames.org source code is stored on **GitHub**. Follow the steps in the section below to setup your computer to download and upload files to this site.

### Import and Compile

* Run **Eclipse** *(desktop icon from previous steps)* 
* Use **c:\ChristGames\Workspace** for the default workspace directory. Check the option "Use this as the default and do not ask again".
* Go to **File** and then **Import**, and then **Android** and **Existing Android code into Workspace**.
* Click the **Browse** button and navigate to **c:\ChristGames\Projects\SpiritHeroes\proj.android** folder and press **Finish**.
* Go to **File** and then **Import**, and then **Android** and **Existing Android code into Workspace**. 
* Click the **Browse** button and navigate to **c:\ChristGames\cocos2dx\platform\android\java** folder and press **Finish**.
* Close the **Welcome!** screen window to see the **Package Explorer**. 
* Go to the **Window** menu and then **Android SDK Manager**.
	* Check **Android 2.3.3 (API 10)** and all packages below it.
	* Leave other default packages checked.
	* Press **Install "X" Packages** button.
	* Accept the license to download the packages. *(Occasionally the download might stop for a file lock conflict. When this happens, kill the last running Java process in Task Manager to continue the download process.)*
	* Once all packages have downloaded, select/highlight the **SpiritHeroes** project in the **Package Explorer** window.
	* Click on the **Project** menu and the **Properties** option.
	* Select **Android** from the list on the left.
	* Select **Google APIs version 2.3.3** in the **Project Build Target**.
	* Press the **Apply** button first, then the **OK** button.
* Click on **SpiritHeroes** package under **Package Explorer** again and then select **Project** menu and **Clean**.
* Press **OK** to clean **all** projects.
* Select **Project** menu again and **Build All** option. *(This will take several minutes to complete)*. 
* If you see any **Errors** in the **Problems** tab at the bottom of the Eclipse IDE when the build completes, then the build was **NOT** successful. Review all of the steps in this document. Correct any setup mistakes and try again. *(Please Note - A few **Warning** messages are normal and will not stop the build.)*
* If you do not see any errors under the **Problem** tab then your build was a **SUCCESS!** You can now contribute to programming this game!

### Testing

##### Emulators and physical devices

* Testing can be done using software emulators or actual Android devices connected via a USB cable. 
* **Please note, software emulators often do NOT work well and are very slow. If available, it is better to use a real Android device for testing.** 
* Follow this link to download the USB drivers and instructions for your device. [http://developer.android.com/sdk/win-usb.html](http://developer.android.com/sdk/win-usb.html) 

##### Running the game

* Click on/*hightlight* **SpiritHeroes** package under **Package Explorer** and then select **Run** menu and **Run As** option and **Android Application**.
* Running the game will also create **..\proj.android\bin\SpiritHeroes.apk**. This file will be copied and installed on your device, and then automatically started. 
* You can manually copy the **.apk** file to a device via **sideloading**. You will need to enable this option on your device if you want to manually install and run.
* A sample game package file is compiled in **..\SpiritHeroes\proj.android\bin\SpiritHeroes.apk**.

### GitHub

##### Overview

* **ChristGames.org** uses **GitHub**, *an industry standard source code repository site*, for storing game source code and some assets. It is **free** to use for Open Source projects. 
* Go to [https://github.com/](https://github.com) and open an account and then download the latest version of the **Git Bash** client here [http://git-scm.com/downloads](http://git-scm.com/downloads). ***Install the Git client with defaults settings***.
* You can also use the **GitHub GUI client for Windows** from this site [http://windows.github.com/](http://windows.github.com/). Refer to the online documentation for using this client.
* We will focus on the standard command line **Git Bash** client for the remaining instructions.

##### First Time Download and Initialization

* Run the **Git Bash** console program. You should should have an icon on your desktop when it was installed. If not, you can manually run it with this command.
<pre>
	"c:\Program Files (x86)\Git\bin\sh.exe" --login -i
</pre>

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

* **Spirit Heroes** - [http://www.spiritheroes.net/](http://www.spiritheroes.net/)
* **ChristGames.org** - [http://christgames.org/](http://christgames.org/)
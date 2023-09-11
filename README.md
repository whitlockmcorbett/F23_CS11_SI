# Weekly directories
Here is where you can find quick links to each weekly directory.

<details>
  <summary>Table of contents</summary>
  <ol>
    <li><a href="#exercise-hello-world">Week 1</a>
  </ol>
</details>
<br> 

# Getting started
## 0️⃣ Installing git (Cygwin)
If you are on Windows, you have probably already installed Cygwin on your device. When you were installing, Cygwin gave you the option to install additional packages, one of these was for Git. Chances are you did not install this, but that is okay we can add packages after installation (kinda). There is no package management in Cygwin outside of the setup program, so you will have to run setup-x86_64.exe again. 
1. Open `File Explore` then to `Downloads` on your device
2. Search for `setup-x86_64.exe` and open the file
3. Go through the set up process again (choose the same options as last time) until you reach the `Select Packages` page. Here use the search tool to search for "Git". Choose the package named `Git` with description `Distributed version control system`
    ![packages](https://github.com/steph1111/F23_CS11_SI/assets/96219204/05954a94-ad7e-4596-855d-8a042905df34)
    Note: now is a good time to install any additional packages you may want like Vim
4. Finish the rest of the set up process
5. Open your Cygwin terminal and confirm git has been properly installed by running
    ```sh
    git --version
    ```
    You should get back something that looks like `git version 2.39.0`

<br>

## 0️⃣ Installing git (Mac and Linux)
1. By default, git should be installed on Mac and Linux systems
2. Confirm git is installed by running the following command in your terminal
    ```sh
    git --version
    ```
    You should get back something that looks like `git version 2.39.0`
3. If you did not get a version number, follow the this guide: [Install Git](https://github.com/git-guides/install-git)

<br>

## 1️⃣ Create a GitHub account
GitHub is the free web based platform we and many other software engineers use to share and collaborate on projects as well as control version history.
<img width="1440" alt="Screen Shot 2023-09-10 at 7 39 35 AM" src="https://github.com/steph1111/F23_CS11_SI/assets/96219204/0ed2d5d9-7b63-4953-8a56-3bfe7901db79">


1. Go to [GitHub](https://github.com/) and follow the steps to create an account
2. Return to the terminal (cygwin or your standard terminal) to configure git
3. Set up your username using the following command where `<your_GitHub_username>` is the username you chose when creating your GitHub account
    ```sh
    git config --global user.name <your_GitHub_username>
    ```
     ```sh
    git config --global user.name CS11SI
    ```
4. Set up your email using the following command where `<your_GitHub_email>` is the email you used when creating your GitHub account
    ```sh
    git config --global user.name <your_GitHub_email>
    ```
     ```sh
    git config --global user.name stlheure@cabrillo.edu
    ```

<br>

## 2️⃣ Set up SSH (Cygwin)
1. Open Cygwin as Administrator and enter the following command to configure ssh
    ```sh
    ssh-host-config
    ```
2. Enter yes for the prompts 
3. You will be prompted to with the text below
    <div><pre style="margin: 0; line-height: 125%"><span style="color: #DA70D6">***Query:</span><span style="color: white"> Enter the value CYGWIN for the daemon: []</span></div>

    For the value enter `ntsec`
    <div><pre style="margin: 0; line-height: 125%"><span style="color: #DA70D6">***Query:</span><span style="color: white"> Enter the value CYGWIN for the daemon: [] ntsec</span></div>

<br>

## 2️⃣ Set up SSH (Mac and Linux)
1. ssh should already be on Mac and Linux systems

<br>

## 3️⃣ Generate an SSH key

1. Confirm you have an `.ssh` directory on your system by running the command
   ```
   ls ~/.ssh
   ```
   This should return a list of files
2. Generate an ssh key to connect your system to your GitHub account
    ```sh
    ssh-keygen
    ```
3. Copy the generated ssh key
    ```
    cat ~/.ssh/id_rsa.pub
    ```

4. Add the SSH key to GitHub
   1. Return to GitHub and open your settings by clicking on your icon then GEAR settings
   2. Scroll to `🔑 SSH and GPG keys`
   3. Click the `New SSH` key button located in the top right corner.
   4. Choose a name for the key (something such that you'll remember what computer/system it was for)
   5. Paste the key from step 2 into the `Key` box
   6. Save the key by clicking Add `SSH key`

<br>


## 4️⃣ Fork the repo to your account
1. Open the `F23_CS11_SI` GitHub repo in your browser: https://github.com/steph1111/F23_CS11_SI
2. At the top of the page click on `Fork` and follow the steps to fork the repo to your account. This creates your own personal version of this repository
   
    <img width="582" alt="fork" src="https://github.com/steph1111/F23_CS11_SI/assets/96219204/80964a3a-e63b-4433-a070-0b69f7c4e747">


<br>

## 5️⃣ Clone your forked repo to your system
1. Open your forked repo. At the top of the page click the green <img width="60" alt="Screen Shot 2023-09-10 at 6 50 33 PM" src="https://github.com/steph1111/F23_CS11_SI/assets/96219204/4239b698-fb5e-45c2-bfb7-1014c2fffd42"> button. Open the SSH tab and copy the link
      <img width="364" alt="Screen Shot 2023-09-10 at 6 50 51 PM" src="https://github.com/steph1111/F23_CS11_SI/assets/96219204/477b25d6-1944-47e7-a0ea-507461b5d0cb">
3. Return to your terminal and navigate using `cd` to where you would like this repo contents to live with your file system
4. To clone your repo use the `git clone` command and paste the link from step 1. This points to the existing repo on GitHub and makes a connected copy, or clone, on your system
    ```ssh
    git clone <link_here>
    ```
    Here is an example of how I would clone my repo (your link is different)
    ```ssh
    git clone git@github.com:steph1111/F23_CS11_SI.git
    ```
5. To confirm the clone was successful list your files with `ls`. You should see the name of the cloned repo in your current directory

<br>


# Maintaining your repo


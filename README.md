## Getting started
### Installing git (Cygwin)
If you are on Windows, you have probably already installed Cygwin on your device. When you were installing, Cygwin gave you the option to install additional packages, one of these was for Git. Chances are you did not install this, but that is okay we can add packages after installation (kinda). There is no package management in Cygwin outside of the setup program, so you will have to run setup-x86_64.exe again. 
1. Open `File Explore` then to `Downloads` on your device
2. Search for `setup-x86_64.exe` and open the file
3. Go through the set up process again (choose the same options as last time) until you reach the `Select Packages` page. Here use the search tool to search for "Git". Choose the package named `Git` with description `Distributed version control system`

    Note: now is a good time to install any additional packages you may want like Vim
4. Finish the rest of the set up process
5. Open your Cygwin terminal and confirm git has been properly installed by running
    ```sh
    git --version
    ```
    You should get back something that looks like `git version 2.39.0`

<br>

### Installing git (Mac and Linux)
1. By default, git should be installed on Mac and Linux systems
2. Confirm git is installed by running the following command in your terminal
    ```sh
    git --version
    ```
    You should get back something that looks like `git version 2.39.0`
3. If you did not get a version number, follow the this guide: [Install Git](https://github.com/git-guides/install-git)

<br>

### Create a GitHub account
GitHub is the free web based platform we and many other software engineers use to share and collaborate on projects as well as control version history.

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

### Set up SSH (Cygwin)
1. In Cygwin enter the folling command to configure ssh in 
    ```sh
    ssh-host-config
    ```
2. Enter yes for the prompts 
3. You will be prompted to with the text below
    <div><pre style="margin: 0; line-height: 125%"><span style="color: #DA70D6">***Query:</span><span style="color: white"> Enter the value CYGWIN for the daemon: []</span></div>

    For the value enter `ntsec`
    <div><pre style="margin: 0; line-height: 125%"><span style="color: #DA70D6">***Query:</span><span style="color: white"> Enter the value CYGWIN for the daemon: [] ntsec</span></div>
    <br>

<br>

### Generate an SSH key

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
   1. Log into Github and open your settings
   2. Scroll to `🔑 SSH and GPG keys`
   3. Click the `New SSH` key button located in the top right corner.
   4. Choose a name for the key (something like Mac/Cygwin/Linux so you remember what it was for)
   5. Paste the key from step 2 into the `Key` box
   6. Save the key by clicking Add `SSH key`

<br>

### Fork this repo to your system





<br>

---
## Weekly directories
---
Here is where you can find quick links to each weekly directory.

<details>
  <summary>Table of contents</summary>
  <ol>
    <li><a href="#exercise-hello-world">Week 1</a>
  </ol>
</details>
<br> 


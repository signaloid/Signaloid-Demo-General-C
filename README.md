[<img src="https://assets.signaloid.io/add-to-signaloid-cloud-logo-dark-v6.png#gh-dark-mode-only" alt="[Add to signaloid.io]" height="30">](https://signaloid.io/repositories?connect=https://github.com/signaloid/Signaloid-Demo-General-C#gh-dark-mode-only)
[<img src="https://assets.signaloid.io/add-to-signaloid-cloud-logo-light-v6.png#gh-light-mode-only" alt="[Add to signaloid.io]" height="30">](https://signaloid.io/repositories?connect=https://github.com/signaloid/Signaloid-Demo-General-C#gh-light-mode-only)

# C Project Template for the Signaloid Cloud Developer Platform
This is a minimal example to get you started with setting up C repositories in GitHub that you can then run on the Signaloid Cloud Developer Platform.

<br>

## Repository Structure
The Signaloid Cloud Developer Platform expects any GitHub repository you wish to run to have a `src` folder containing your source code. By default, the Signaloid Cloud Developer Platform will compile all C and C++ source files (extensions `*.c`, `*.cc`, `*.cpp`, `*.c++`, `*.cp`, and `*.cxx`) in that folder and will link them into a single binary and run that on your choice of uncertainty-tracking processor.

<br>

## Configuring the Build (`config.mk`)
You can modify the default build behavior described above by providing a file named `config.mk` containing overrides to the build process.

For C repositories, there are two variables in `config.mk` that are most likely to be use useful:
- `SOURCES`, a list of C source files;
- `CFLAGS`, the options that are passed to the C compiler.

If the `SOURCES` variable is not set, the Signaloid Cloud Developer Platform will compile all the files that match `*.c`, `*.cc`, `*.cpp`, `*.c++`, `*.cp`, and `*.cxx` in `src` and its subfolders and will link the generated object files into a single executable binary.


### 🎓 Example
The following example shows a `src/` folder for a repository, containing one C source file (`main.c`) and a `config.mk` to modify the build parameters.
```
src/
├── config.mk
└── main.c
```

In this repository, the file [`src/config.mk`](./src/config.mk) contains
```makefile
SOURCES		= main.c
CFLAGS		= -DDEBUG
```
This tells the Signaloid Cloud Developer Platform to build the [`main.c`](./src/main.c) file using the compiler flag `-DDEBUG` (i.e., defining the symbol `DEBUG`).

<br>

## Included Headers
Please place any header files needed during the build process in the `src` folder as this folder is included in the build search path.

<br>

## Libraries
During the build process, the Signaloid Cloud Developer Platform links the compiled object files against the following libraries:
- `libc`: the C standard library;
- `libm`: the C math library;
- `libuncertain`: A library to allow applications running on uncertainty-tracking computer architectures to access and inject uncertainty information into the underlying microarchitectures. You can find out more about `libUncertain` in the [libUncertain documentation](https://libuncertain.signaloid.io/).

<br>

## 🍰 Accessing Your GitHub Repository from the Signaloid Cloud Developer Platform
There are two ways to access a GitHub repository from the Signaloid Cloud Developer Platform.

### Option 1:  Using the “Add to signaloid.io” Button
This first option makes it easiest for you (and other GitHub users) to run your repository on the Signaloid Cloud Developer Platform. Edit the snippet at the top of this `README.md`, whose source is repeated in the block below, to include the URL of your Git repository (replacing the text `<your repository URL here>`):

```html
[<img src="https://assets.signaloid.io/add-to-signaloid-cloud-logo-dark-v6.svg#gh-dark-mode-only" alt="[Add to signaloid.io]" height="30">](https://signaloid.io/repositories?connect=<your repository URL here>#gh-dark-mode-only)
[<img src="https://assets.signaloid.io/add-to-signaloid-cloud-logo-light-v6.svg#gh-light-mode-only" alt="[Add to signaloid.io]" height="30">](https://signaloid.io/repositories?connect=<your repository URL here>#gh-light-mode-only)
```

Next, go to the repository's Github page and click on the “Add to signaloid.io” button.


### Option 2: Manually Adding Repositories to the Signaloid Cloud Developer Platform
A second option is to manually add a repository to the Signaloid Cloud Developer Platform. To do so, follow these steps:
1. Log in to the Signaloid Cloud Developer Platform at [https://signaloid.io/](https://signaloid.io/). If you do not already have an account, you can create one for free in just three clicks.
2. Click on the `Repositories` tab in the menu on the left side of the screen (you might need to go through the menu "burger" on mobile screens).
3. Give the Signaloid Cloud Developer Platform permission to access your repositories, using the blue GitHub "Login" button.
4. Click on the green button (Connect to Repositories). All your repositories will appear in a list. Add the relevant repository.
5. Your repository should now appear in the UI.


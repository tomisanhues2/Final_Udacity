<div align="center" id="top"> 
  &#xa0;
  <!-- <a href="https://final_udacity.netlify.app">Demo</a> -->
</div>
<h1 align="center">Mediabase</h1>
<p align="center">
  <img alt="Github top language" src="https://img.shields.io/github/languages/top/tomisanhues2/final_udacity?color=56BEB8">

  <img alt="Github language count" src="https://img.shields.io/github/languages/count/tomisanhues2/final_udacity?color=56BEB8">

  <img alt="Repository size" src="https://img.shields.io/github/repo-size/tomisanhues2/final_udacity?color=56BEB8">

  <img alt="License" src="https://img.shields.io/github/license/tomisanhues2/final_udacity?color=56BEB8">

  <!-- <img alt="Github issues" src="https://img.shields.io/github/issues/tomisanhues2/final_udacity?color=56BEB8" /> -->

  <!-- <img alt="Github forks" src="https://img.shields.io/github/forks/tomisanhues2/final_udacity?color=56BEB8" /> -->

  <!-- <img alt="Github stars" src="https://img.shields.io/github/stars/tomisanhues2/final_udacity?color=56BEB8" /> -->
</p>

<!-- Status -->

<h4 align="center"> 
	🚧  Mediabase 🚀 Under construction...  🚧
</h4> 

<hr>

<p align="center">
  <a href="#dart-about">About</a> &#xa0; | &#xa0; 
  <a href="#sparkles-features">Features</a> &#xa0; | &#xa0;
  <a href="#rocket-technologies">Technologies</a> &#xa0; | &#xa0;
  <a href="#white_check_mark-requirements">Requirements</a> &#xa0; | &#xa0;
  <a href="#checkered_flag-starting">Starting</a> &#xa0; | &#xa0;
  <a href="#usage">Usage</a> &#xa0; | &#xa0;
  <a href="#documentation">Documentation</a>
</p>

<br>

## :dart: About ##


Mediabase is a c++ Application which allows you to search for any movie using it's name and will give you many relevant information regarding the movie you have entered. This project was made for the Udacity Nanodegree Program Capstone final project.

This application utilizes [OMDbAPI](https://www.omdbapi.com/) to generate GET requests to IMDB and obtain all the movie data.

## :sparkles: Features ##

Obtain the following information for any movie;\
:heavy_check_mark: Title\
:heavy_check_mark: Year\
:heavy_check_mark: Runtime\
:heavy_check_mark: Director\
:heavy_check_mark: Genre\
:heavy_check_mark: Actors\
:heavy_check_mark: Plot\
:heavy_check_mark: Awards\
:heavy_check_mark: Metascore\
:heavy_check_mark: IMDBRating

[![image.png](https://i.postimg.cc/d02m7HKC/image.png)](https://postimg.cc/HJL7RtnW)

## :rocket: Technologies ##

The following tools were used in this project:

- [CURL](https://github.com/curl/curl) 
- [LibCURL](https://curl.se/libcurl/)
- [nlohmann_json](https://github.com/nlohmann/json)
- [HTTPRequest](https://github.com/elnormous/HTTPRequest)
- [OpenCV](https://github.com/opencv/opencv)
- [wxWidgets](https://github.com/wxWidgets/wxWidgets)
- [OMDbAPI](https://www.omdbapi.com/)

## :white_check_mark: Requirements ##

Before starting :checkered_flag:, you need to have [CURL](https://github.com/curl/curl), [OpenCV](https://github.com/opencv/opencv), [wxWidgets](https://github.com/wxWidgets/wxWidgets) and [LibCURL](https://curl.se/libcurl/) installed.

!Make sure your cmake is at least version 3.14!

cmake will attempt to download nlohmann_json and HTTPRequest on its own


## :checkered_flag: Starting ##

```bash
# Clone this project
$ git clone https://github.com/tomisanhues2/final_udacity

# Access
$ cd final_udacity

# Make build directory
$ mkdir build && cd build

# Compile the project to check dependencies
$ cmake ..
$ make

#Run the app
$./FinalProjectTest1/FinalProjectTest1

```

## Usage
Once the program has been executed you will be greeted with the following.

![Program Main Menu](https://i.postimg.cc/kXCcCd3m/IGPej-8a-Qgi4-Noqx-HLy-Zyw.png)]

All you have to do is enter a movie name and press the **search** button to have all the information displayed!



## Documentation
<table class="tg">
<thead>
  <tr>
    <th class="tg-0pky"><span style="font-weight:bold">**Rubric Criteria**</span></th>
    <th class="tg-0pky"><span style="font-weight:bold">**Specifications**</span></th>
    <th class="tg-0pky"><span style="font-weight:bold">**Related file**</span></th>
    <th class="tg-0pky"><span style="font-weight:bold">**Description**</span></th>
  </tr>
</thead>
<tbody>
  <tr>
    <td class="tg-0pky">The project demonstrates an understanding of C++ functions and control structures.</td>
    <td class="tg-0pky"><ul><li>A variety of control structures are used in the project.</li>
                            <li>The project code is clearly organized into functions.</li>
                        </ul></td>
    <td class="tg-0pky"><ul><li><a href="FinalProjectTest1/FinalProjectTest1.cpp" title="FinalProjectTest1.cpp">FinalProjectTest1.cpp</a></li>
                            <li><a href="FinalProjectTest1/FinalProjectTest1.h" title="FinalProjectTest1.h">FinalProjectTest1.h</a></li>
                        </ul></td>
    <td class="tg-0pky">The program utilizes Classes, struct, funtions, header files and many more to ensure it is organized and works accordingly</td>
  </tr>
  <tr>
    <td class="tg-0pky">The project reads data from a file and process the data, or the program writes data to a file.</td>
    <td class="tg-0pky">The project reads data from an external file or writes data to a file as part of the necessary operation of the program.</td>
    <td class="tg-0pky"><ul>
                            <li><a href="FinalProjectTest1/FinalProjectTest1.h" title="FinalProjectTest1.h">FinalProjectTest1.h</a></li>
                        </ul></td></td>
    <td class="tg-0pky">It will save the img to display to the user in your user tmp folder, then access it, resize it and save it again to be displayed.</td>
  </tr>
  <tr>
    <td class="tg-0pky">The project accepts user input and processes the input.</td>
    <td class="tg-0pky">The project accepts input from a user as part of the necessary operation of the program.</td>
    <td class="tg-0pky"><ul><li><a href="FinalProjectTest1/FinalProjectTest1.cpp" title="FinalProjectTest1.cpp">FinalProjectTest1.cpp</a></li>
                            <li><a href="FinalProjectTest1/FinalProjectTest1.h" title="FinalProjectTest1.h">FinalProjectTest1.h</a></li>
                        </ul></td></td>
    <td class="tg-0pky">The program uses wxWidgets TextCtrl element to allow the user to input the name of the movie to be searched</td>
  </tr>
  <tr>
    <td class="tg-0pky">The project uses Object Oriented Programming techniques.</td>
    <td class="tg-0pky">The project code is organized into classes with class attributes to hold the data, and class methods to perform tasks.</td>
    <td class="tg-0pky"><ul><li><a href="FinalProjectTest1/FinalProjectTest1.cpp" title="FinalProjectTest1.cpp">FinalProjectTest1.cpp</a></li>
                            <li><a href="FinalProjectTest1/FinalProjectTest1.h" title="FinalProjectTest1.h">FinalProjectTest1.h</a></li>
                        </ul></td></td>
    <td class="tg-0pky">Self descriptive</td>
  </tr>
  <tr>
    <td class="tg-0pky">Classes use appropriate access specifiers for class members.</td>
    <td class="tg-0pky">All class data members are explicitly specified as public, protected, or private.</td>
    <td class="tg-0pky"><ul><li><a href="FinalProjectTest1/FinalProjectTest1.h" title="FinalProjectTest1.h">FinalProjectTest1.h</a></li>
                        </ul></td></td>
    <td class="tg-0pky">All the classes have all of their data members specificed in the header file</td>
  </tr>
  <tr>
    <td class="tg-0pky">Class constructors utilize member initialization lists.</td>
    <td class="tg-0pky">All class members that are set to argument values are initialized through member initialization lists.</td>
    <td class="tg-0pky"><ul><li><a href="FinalProjectTest1/FinalProjectTest1.cpp" title="FinalProjectTest1.cpp">FinalProjectTest1.cpp</a></li>
                            <li><a href="FinalProjectTest1/FinalProjectTest1.h" title="FinalProjectTest1.h">FinalProjectTest1.h</a></li>
                        </ul></td></td>
    <td class="tg-0pky">All constructors meet this requirement</td>
  </tr>
  <tr>
    <td class="tg-0pky">Classes abstract implementation details from their interfaces.</td>
    <td class="tg-0pky">All class member functions document their effects, either through function names, comments, or formal documentation. Member functions do not change program state in undocumented ways.</td>
    <td class="tg-0pky"><ul><li><a href="FinalProjectTest1/FinalProjectTest1.cpp" title="FinalProjectTest1.cpp">FinalProjectTest1.cpp</a></li>
                            <li><a href="FinalProjectTest1/FinalProjectTest1.h" title="FinalProjectTest1.h">FinalProjectTest1.h</a></li>
                        </ul></td></td>
    <td class="tg-0pky">Many comments are used to outline all the operations in the program</td>
  </tr>
  <tr>
    <td class="tg-0pky">Classes encapsulate behavior.</td>
    <td class="tg-0pky">Appropriate data and functions are grouped into classes. Member data that is subject to an invariant is hidden from the user. State is accessed via member functions.</td>
    <td class="tg-0pky"><ul><li><a href="FinalProjectTest1/FinalProjectTest1.cpp" title="FinalProjectTest1.cpp">FinalProjectTest1.cpp</a></li>
                            <li><a href="FinalProjectTest1/FinalProjectTest1.h" title="FinalProjectTest1.h">FinalProjectTest1.h</a></li>
                        </ul></td></td>
    <td class="tg-0pky">There are private data members which hidden for the user and ensure the program runs accordingly</td>
  </tr>
  <tr>
    <td class="tg-0pky">Classes follow an appropriate inheritance hierarchy.</td>
    <td class="tg-0pky">Inheritance hierarchies are logical. Composition is used instead of inheritance when appropriate. Abstract classes are composed of pure virtual functions. Override functions are specified.</td>
    <td class="tg-0pky"><ul><li><a href="FinalProjectTest1/FinalProjectTest1.cpp" title="FinalProjectTest1.cpp">FinalProjectTest1.cpp</a></li>
                            <li><a href="FinalProjectTest1/FinalProjectTest1.h" title="FinalProjectTest1.h">FinalProjectTest1.h</a></li>
                        </ul></td></td>
    <td class="tg-0pky">The functionality of wxWidgets is essential in inheritance allowing the program to create it's own class objects to modify</td>
  </tr>
  <tr>
    <td class="tg-0pky">Overloaded functions allow the same function to operate on different parameters.</td>
    <td class="tg-0pky">One function is overloaded with different signatures for the same function name.</td>
    <td class="tg-0pky"><ul><li><a href="FinalProjectTest1/FinalProjectTest1.cpp" title="FinalProjectTest1.cpp">FinalProjectTest1.cpp</a></li>
                            <li><a href="FinalProjectTest1/FinalProjectTest1.h" title="FinalProjectTest1.h">FinalProjectTest1.h</a></li>
                        </ul></td></td>
    <td class="tg-0pky">The functionality of wxWidgets is essential in inheritance allowing the program to create it's own class objects to modify</td>
  </tr>
  <tr>
    <td class="tg-0pky">The project uses destructors appropriately.</td>
    <td class="tg-0pky">At least one class that uses unmanaged dynamically allocated memory, along with any class that otherwise needs to modify state upon the termination of an object, uses a destructor.</td>
    <td class="tg-0pky"><ul><li><a href="FinalProjectTest1/FinalProjectTest1.cpp" title="FinalProjectTest1.cpp">FinalProjectTest1.cpp</a></li>
                            <li><a href="FinalProjectTest1/FinalProjectTest1.h" title="FinalProjectTest1.h">FinalProjectTest1.h</a></li>
                        </ul></td></td>
    <td class="tg-0pky">There are no pointers left hanging, all memory management is done by either the library or the program itself.</td>
  </tr>
  <tr>
    <td class="tg-0pky">The project uses multithreading.</td>
    <td class="tg-0pky">The project uses multiple threads in the execution.</td>
    <td class="tg-0pky"><ul><li><a href="FinalProjectTest1/FinalProjectTest1.cpp" title="FinalProjectTest1.cpp">FinalProjectTest1.cpp</a></li>
                            <li><a href="FinalProjectTest1/FinalProjectTest1.h" title="FinalProjectTest1.h">FinalProjectTest1.h</a></li>
                        </ul></td></td>
    <td class="tg-0pky">Progress bar to prevent the ability to spam search running in a different thread so the program can keep managing data</td>
  </tr>
  <tr>
    <td class="tg-0pky">A mutex or lock is used in the project.</td>
    <td class="tg-0pky">A mutex or lock (e.g. std::lock_guard or `std::unique_lock) is used to protect data that is shared across multiple threads in the project code.</td>
    <td class="tg-0pky"><ul><li><a href="FinalProjectTest1/FinalProjectTest1.cpp" title="FinalProjectTest1.cpp">FinalProjectTest1.cpp</a></li>
                            <li><a href="FinalProjectTest1/FinalProjectTest1.h" title="FinalProjectTest1.h">FinalProjectTest1.h</a></li>
                        </ul></td></td>
    <td class="tg-0pky"></td>
  </tr>
  <tr>
    <td class="tg-0pky">A condition variable is used in the project.</td>
    <td class="tg-0pky">A std::condition_variable is used in the project code to synchronize thread execution.</td>
    <td class="tg-0pky"><ul><li><a href="FinalProjectTest1/FinalProjectTest1.cpp" title="FinalProjectTest1.cpp">FinalProjectTest1.cpp</a></li>
                            <li><a href="FinalProjectTest1/FinalProjectTest1.h" title="FinalProjectTest1.h">FinalProjectTest1.h</a></li>
                        </ul></td></td>
    <td class="tg-0pky">Wait until the time has passed to enable the SEARCH button again</td>
  </tr>
</tbody>
</table>

&#xa0;


Made with :heart: by <a href="https://github.com/tomisanhues2" target="_blank">Tomisanhues2</a>

<a href="#top">Back to top</a>

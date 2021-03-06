/*
Minehash
Author: Paul Lindberg
Created 6/26/2018
Description: A simple program for extracting Minecraft's files.

*/
#ifndef HEADER_H
#define HEADER_H
#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <Windows.h>
#include <tchar.h>
#include <strsafe.h>
#include <map>
#include <vector>
#include <errno.h>

#include <Shobjidl.h>
#include <shlobj.h>
#include <shobjidl_core.h>
#include <filesystem>

using namespace std;

//a tuple containing object name, hash, and error code.
typedef vector< tuple<string, string> > my_tuple;

#include "dialog.h"
#include "processJson.h"
#include "jsonObject.h"
#include "search.h"
#include "copyFiles.h"

//Error codes

const int COPY_SUCCESS = 0;
const int COPY_FAILED = 1;
const int COPY_SOME_ERRORS = 2;




#endif // !HEADER_H

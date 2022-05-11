# Escapement
A lib for cpp console programs
The main.cpp and other files are a part of example.

## how to use it
Just include the file to your program!  
like this:  
```cpp
#include "escapement.h"
```

And don't forget there's a namespace, you need use this
```cpp
esc::playBeepFreq(xxx);
```
or this
```cpp
using namespace esc;
```
in any function:
```cpp
writeFileWF(xxx);
```
to use it.

# Technical documentation
## function list:
  
Oops! We need translators!  
If you can speak two languages fluently, please contact us!  
  
### NoIOSyncLagging
关闭cin，cout的同步流以加快速度(牺牲scanf和printf)  
可能导致escapement的部分函数引发错误
```cpp
(esc::) void esc::NoIOSyncLagging(void)
```
### spawnRandom
生成随机数(不依靠时间)  
```cpp
(esc::) int spawnRandom(int min, int max)
```
```
int min:  随机数的最小值(包含)
int max:  随机数的最大值(包含)
返回: 生成的随机数(int)
```
### setConsoleColor
设置控制台颜色(全局)
```cpp
(esc::) void setConsoleColor(char foreground, char background)
```
```
foreground: 前景色
	*使用与ESC_CONSOLE_COLOR_WHITE类似的定义传入(十六种颜色)*
background: 背景色
	同上
```
具体定义:
```cpp
#define ESC_CONSOLE_COLOR_BLACK			'0'
#define ESC_CONSOLE_COLOR_BLUE				'1'
#define ESC_CONSOLE_COLOR_GREEN			'2'
#define ESC_CONSOLE_COLOR_LIME				'3'
#define ESC_CONSOLE_COLOR_RED				'4'
#define ESC_CONSOLE_COLOR_PURPLE			'5'
#define ESC_CONSOLE_COLOR_YELLOW			'6'
#define ESC_CONSOLE_COLOR_WHITE			'7'
#define ESC_CONSOLE_COLOR_GRAY				'8'
#define ESC_CONSOLE_COLOR_AZURE			'9'
#define ESC_CONSOLE_COLOR_LITE_GREEN			'A'
#define ESC_CONSOLE_COLOR_CYAN				'B'
#define ESC_CONSOLE_COLOR_LITE_RED			'C'
#define ESC_CONSOLE_COLOR_LITE_PURPLE			'D'
#define ESC_CONSOLE_COLOR_LITE_YELLOW			'E'
#define ESC_CONSOLE_COLOR_PURE_WHITE			'F'
#define ESC_CONSOLE_COLOR_RANDOM        		'R'
```
### setTextColor
```cpp
(esc::) bool setTextColor(int color)
```
```
color: 颜色, 使用与ESC_COLOR_RED类似的定义进行传参
返回: 真表示失败，假表示成功
```
具体定义:
```cpp
// text colors
#define ESC_COLOR_PUREWHITE				0
#define	ESC_COLOR_RED					1
#define ESC_COLOR_GREEN				2
#define ESC_COLOR_BLUE					3
#define ESC_COLOR_YELLOW		    		4
#define ESC_COLOR_PURPLE			    	5
#define ESC_COLOR_CYAN					6
#define ESC_COLOR_RANDOM                		7
```
### filePathSegmentingHelper
```cpp
(esc::) filePath filePathSegmentingHelper(string fullPath)
```
```
fullPath: 文件的路径
返回: 裁剪开的文件路径
```

### outputWF & outputNF
文本形式输出文件
```cpp
(esc::) bool outputWF(string filePath, int lnFrom, int lnTo)
(esc::) bool outputNF(string filePath, int lnFrom, int lnTo)
```
```
filePath: 文件的路径
lnFrom: 第几行开始，用0代表第一行
lnTo: 第几行结束，用-1代表到文件结尾

返回: 真为失败，假为成功 
!失败不表示未输出内容，只是可能在读到指定的最后一行!
!前就读完了文件(文件行数小于指定行数)，等错误，但是!
!控制台已经输出部分内容                            !

outputWF: 带格式输出文件(ANSI文件)[见下文<格式>]
outputNF: 不带格式输出文件(ANSI文件)
```
<格式>:
- \n: 换行
- \t: 制表符
- \c: 颜色，在后面带颜色前三个字母，如\cwhi 白色
- - \cwhi 白
- - \cred 红
- - \cgre 绿
- - \cblu 蓝(深蓝)
- - \cyel 黄(米黄)
- - \cpur 紫
- - \ccya 青(蓝绿)
- \a: 响铃(Windows提示)
- \b: 回到行首

### readConfigBool & readConfigInt & readConfigStr
```cpp
(esc::) bool readConfigBool(string filePath, string name)
(esc::) int readConfigInt(string filePath, string name)
(esc::) string readConfigStr(string filePath, string name)
```
```
filePath: 文件的路径
name: 标签的名字

返回: 对应的结果(没有找到恒为0/false/"")
```
文件格式:
```
# 一行注释，不能续行
# bool
valueTrue=true
valueFalse=false

# int
valueOne=1
valueTwo=2
valueOneOneFourFiveOneFor=114514

# string
valueHelloWorld="Hello, World!"
valueTest="test"
```
```
# 错误的语法[×]DONT WRITE LIKE THIS:
# note1\
note2
# correct:
# note1
# note2

# wrong tag(int, but similar to all)
name = 1
# correct:
name=1

# wrong bool
name=1
name2=0
# correct
name=true
name2=false

# wrong string
name=123
name2="he said"hello"!"
# correct:
name="123"
# can't put double quote in the string, I admit it.

```
### getConsoleHWND
获取本控制台窗口句柄
```cpp
(esc::) HWND getConsoleHWND()
```
```
返回: 本控制台窗口的窗口句柄(失败返回NULL)
```
### keyDown
```cpp
(esc::) bool keyDown(int KeyCode)
```
```
KeyCode: 使用类似KEY_ENTER的定义进行传参，见下文定义
```
按键到按键码定义:
```
#ifndef KEYs
// keys
#define KEY_BACKSPACE                   8
#define KEY_TAB                         9
#define KEY_CLEAR                       12
#define KEY_ENTER                       13
#define KEY_SHIFT                       16
#define KEY_CTRL                        17
#define KEY_ALT                         18
#define KEY_CAPSLOCK                    20
#define KEY_ESC                         27
#define KEY_SPACEBAR                    32
#define KEY_PAGEUP                      33
#define KEY_PAGEDOWN                    34
#define KEY_END                         35
#define KEY_HOME                        36
#define KEY_LEFTARROW                   37
#define KEY_UPARROW                     38
#define KEY_RIGHTARROW                  39
#define KEY_DWARROW                     40
#define KEY_INSERT                      45
#define KEY_DELETE                      46
#define KEY_NUMLOCK                     144
#define KEY_COLON                       186
#define KYE_SEMICOLON                   186
#define KEY_EQUAL                       187
#define KEY_PLUS                        187
#define KEY_COMMA                       188
#define KEY_LESS                        188
#define KEY_MINUS                       189
#define KEY_UNDERSCORE                  189
#define KEY_PERIOD                      190
#define KEY_GREAT                       190
#define KEY_DIVIDE                      191
#define KEY_QUESTIONMARK                191
#define KEY_BACKQUOTE                   192
#define KEY_TILDE                       192
#define KEY_OPEN_BRACE                  219
#define KEY_OPEN_BRACKET                219
#define KEY_VERTICLE_BAR                220
#define KEY_CLOSE_BRACE                 221
#define KEY_CLOSE_BRACKET               221
#define KEY_SINGLE_QUOTE                222
#define KEY_DOUBLE_QUOTE                222
#define KEY_QUOTES                      222
#define KEY_VOLUME_PLUS                 175
#define KEY_VOLUME_MINUS                174
#define KEY_MUSIC_STOP                  179
#define KEY_MUTE                        173
#define KEY_BROWSER                     172
#define KEY_MAIL                        180
#define KEY_SEARCH                      170
#define KEY_COLLECT                     171
#define KEY_KP_0                        96
#define KEY_KP_1                        97
#define KEY_KP_2                        98
#define KEY_KP_3                        99
#define KEY_KP_4                        100
#define KEY_KP_5                        101
#define KEY_KP_6                        102
#define KEY_KP_7                        103
#define KEY_KP_8                        104
#define KEY_KP_9                        105
#define KEY_KP_MULTPLY                  106
#define KEY_KP_PLUS                     107
#define KEY_KP_ENTER                    108
#define KEY_KP_MINUS                    109
#define KEY_KP_PERDIOD                  110
#define KEY_KP_SLASH                    111
#define KEY_F1                          112
#define KEY_F2                          113
#define KEY_F3                          114                          
#define KEY_F4                          115
#define KEY_F5                          116
#define KEY_F6                          117
#define KEY_F7                          118
#define KEY_F8                          119
#define KEY_F9                          120
#define KEY_F10                         121
#define KEY_F11                         122
#define KEY_F12                         123
#define KEY_A                           65
#define KEY_B                           66
#define KEY_C                           67
#define KEY_D                           68
#define KEY_E                           69
#define KEY_F                           70
#define KEY_G                           71
#define KEY_H                           72
#define KEY_I                           73
#define KEY_J                           74
#define KEY_K                           75
#define KEY_L                           76
#define KEY_M                           77
#define KEY_N                           78
#define KEY_O                           79
#define KEY_P                           80
#define KEY_Q                           81
#define KEY_R                           82
#define KEY_S                           83
#define KEY_T                           84
#define KEY_U                           85
#define KEY_V                           86
#define KEY_W                           87
#define KEY_X                           88
#define KEY_Y                           89
#define KEY_Z                           90
#define KEY_0                           48
#define KEY_1                           49
#define KEY_2                           50
#define KEY_3                           51
#define KEY_4                           52
#define KEY_5                           53
#define KEY_6                           54
#define KEY_7                           55
#define KEY_8                           56
#define KEY_9                           57
#define KEYs true
#endif
```
### chcp
切换控制台活动页代码(设置控制台字符集)
```cpp
(esc::) void chcp(string type)
```
```
type: 使用类似ESC_CHCP_UNICODE的定义传参, 见下文定义部分
```
定义:
```
// chcp
#define ESC_CHCP_US                     "437"
#define ESC_CHCP_MULT                   "850"
#define ESC_CHCP_SLAVIC                 "852"
#define ESC_CHCP_CYRILLIC               "855"
#define ESC_CHCP_TURKISH                "857"
#define ESC_CHCP_PORTUGUESE             "860"
#define ESC_CHCP_ICELANDIC              "861"
#define ESC_CHCP_CANADIAN               "863"
#define ESC_CHCP_NORDIC                 "865"
#define ESC_CHCP_RUSSIAN                "866"
#define ESC_CHCP_MGREEK                 "869"
#define ESC_CHCP_CHINESE                "936"
#define ESC_CHCP_ANSI                   "65000"
#define ESC_CHCP_UNICODE                "65001"
#define ___EscDef___ true
#endif
```
### MessageBoxes
提供对于MessageBoxA的快捷操作
```cpp
(using namespace esc;)

void msgbox(HWND hwnd,LPCSTR text,LPCSTR capt)
void msgboxS(HWND hwnd, LPCSTR text, LPCSTR capt)
void Wrngbox(HWND hwnd, LPCSTR text, LPCSTR capt)
void Errbox(HWND hwnd, LPCSTR text, LPCSTR capt)
```
```
hwnd: 窗口句柄，可以为空
text: 窗口内容
capt: 窗口标题
```
### processing processes
对于进程的处理
```cpp
(using namespace esc;)

bool procSuspend(DWORD PID)
bool procResume(DWORD PID)
void procKill(DWORD PID)
void procKillTree(DWORD PID)
void procKillName(string name)
void procKillTreeName(string name)
```
```
PID: 进程的id(process id)
name; 进程的名字(e.g. "***.exe")
```

## classes and structs:
### filePath
```cpp
class filePath
{
public:
    string fullPath;					// C:\users\admin\desktop\target.txt
    string fullPathWithQuotes;			// "C:\users\admin\desktop\target.txt"

    string onlyPath;					// C:\users\admin\desktop
    string onlyPathHoweverWithQuotes;	// "C:\users\admin\desltop"

    string onlyFileName;				// target.txt
    string onlyfileSuffix;				// txt
    string fileNameWithSuffix;			// target

    bool relativePath = false;			// TRUE: ./target.txt      FALSE: C:\users\admin\desktop\target.txt
    string driver;						// C(if is relativePath is false)
};
```
### folderPath
```cpp
class folderPath
{
public:
    string fullPath;					// C:\users\admin\desktop
    string fullPathHoweverWithQuotes;	// "C:\users\admin\desktop"
    string pathWithoutSelf;				// C:\users\admin
    string self;						// desktop

    bool relativePath = false;			// TRUE: ./desktop      FALSE: C:\users\admin\desktop\desktop
    string driver;						// C(if is relativePath is false)
};
```
### sounds
播放声音, 与MessageBeep()和Beep()功能相同
```cpp
(esc::) void playBeepMsg(int type)
(esc::) void playBeepFreq(int freq, int duration)
```
```
type: 种类，使用类似MSG_OK的定义传参，见下定义
freq: 声音的频率(Hz)
duration: 声音的持续时间(ms)
```
定义:
```cpp
#ifndef MSGBeeps
#define MSG_BEEP                0xFFFFFFFF
#define MSG_OK                  0x00000000L
#define MSG_ICONERROR           0x00000010L
#define MSG_ICONSTOP            0x00000010L
#define MSG_ICONHAND            0x00000010L
#define MSG_ICONQUESTION        0x00000020L
#define MSG_ICONEXCLAMATION     0x00000030L
#define MSG_ICONWARNING         0x00000030L
#define MSG_ICONASTERISK        0x00000040L
#define MSG_ICONINFORMATION     0x00000040L

#define MSGBeeps true
#endif
```


## Macro defitions:
```
__VERSION_OF_ESCAPEMENT__ : string, version of Escapement
__RELEASE_VERSION_OF_ESCAPEMENT__ : int or short, first version number
					of escapemet
__DEBUG_VERSION_OF_ESCAPEMENT__ : int or short, second version number of
					escapement
__COMPILE_VERSION_OF_ESCAPEMENT__ : int or short, third version number of
					escapement
cmd(str) -> system(((string)str).c_str()) : allow you to use '+' to connect strings for system()
clearConsole() -> system("cls") : fast clear the console
pause() -> system("pause") : fast pause the program
_Esc_maxn : a int that defines the maxium subscript

- ESC_CONSOLE_COLOR_XXX : colors
- ESC_COLOR_XXX : colors for further texts
- ESC_CHCP_XXX : chcp locations(encodings)
- KEY_XXX : key codes
- MSG_XXX : message beep codes

```

## header files that already included
don't include them angain!
```cpp
#include <iostream>
#include <fstream>
#include <cstring>
#include <vector>
#include <random>
#include <string>
#include <windows.h>
using namespace std;
```

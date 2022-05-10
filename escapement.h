#pragma once

#include <iostream>
#include <fstream>
#include <cstring>
#include <vector>
#include <random>
#include <string>

#include <windows.h>

using namespace std;

#define __VERSION_OF_ESCAPEMENT__ "1.0.0"
#define __RELEASE_VERSION_OF_ESCAPEMENT__ 1
#define __DEBUG_VERSION_OF_ESCAPEMENT__ 0
#define __COMPILE_VERSION_OF_ESCAPEMENT__ 0

#ifndef ___EscDef___
#define cmd(str) system(((string)str).c_str())
#define clearConsole() system("cls")
#define pause() system("pause")
#define fx_private_setColor(dat) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | dat);
#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0)

#define _Esc_maxn 1024

// perm colors
#define ESC_CONSOLE_COLOR_BLACK			'0'
#define ESC_CONSOLE_COLOR_BLUE			'1'
#define ESC_CONSOLE_COLOR_GREEN			'2'
#define ESC_CONSOLE_COLOR_LIME			'3'
#define ESC_CONSOLE_COLOR_RED			'4'
#define ESC_CONSOLE_COLOR_PURPLE	    '5'
#define ESC_CONSOLE_COLOR_YELLOW	    '6'
#define ESC_CONSOLE_COLOR_WHITE			'7'
#define ESC_CONSOLE_COLOR_GRAY			'8'
#define ESC_CONSOLE_COLOR_AZURE			'9'
#define ESC_CONSOLE_COLOR_LITE_GREEN	'A'
#define ESC_CONSOLE_COLOR_CYAN			'B'
#define ESC_CONSOLE_COLOR_LITE_RED		'C'
#define ESC_CONSOLE_COLOR_LITE_PURPLE	'D'
#define ESC_CONSOLE_COLOR_LITE_YELLOW	'E'
#define ESC_CONSOLE_COLOR_PURE_WHITE	'F'
#define ESC_CONSOLE_COLOR_RANDOM        'R'

// text colors
#define ESC_COLOR_PUREWHITE				0
#define	ESC_COLOR_RED					1
#define ESC_COLOR_GREEN					2
#define ESC_COLOR_BLUE					3
#define ESC_COLOR_YELLOW		    	4
#define ESC_COLOR_PURPLE			    5
#define ESC_COLOR_CYAN					6
#define ESC_COLOR_RANDOM                7

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

/// <summary>
/// the recommend struct for containing the path of a file
/// </summary>
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
/// <summary>
/// the recommend struct for containing the path of a folder
/// </summary>
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

namespace _Escapement
{
    int spawnRandom(int min, int max)
    {
        random_device seed;
        ranlux48 engine(seed());
        uniform_int_distribution<> distrib(min, max);

        int _bds = distrib(engine);
        return _bds;
    }

    /// <summary>
    /// Validate the random value for changing the console color
    /// </summary>
    /// <param name="input">not valid char</param>
    /// <returns>valid char</returns>
    char RandomProc4Console(char input)
    {
        if (input == 'R')
        {
            input = spawnRandom(0, 15);
            switch (input)
            {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
                input += '0';
                break;
            case 10:
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
                input -= 10;
                input += 'A';
                break;
            }
        }
        return input;
    }
    void setConsoleColor(char foreground, char background)
    {
        if (foreground == 'R')
        {
            foreground = RandomProc4Console(foreground);
        }
        if (background == 'R')
        {
            background = RandomProc4Console(background);
        }
        cmd("color " + background + foreground);
    }
    bool setTextColor(int color)
    {
        bool flag = true;
        switch (color)
        {
        case 0:
            fx_private_setColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
            break;
        case 1:
            fx_private_setColor(FOREGROUND_RED);
            break;
        case 2:
            fx_private_setColor(FOREGROUND_GREEN);
            break;
        case 3:
            fx_private_setColor(FOREGROUND_BLUE);
            break;
        case 4:
            fx_private_setColor(FOREGROUND_RED | FOREGROUND_GREEN);
            break;
        case 5:
            fx_private_setColor(FOREGROUND_RED | FOREGROUND_BLUE);
            break;
        case 6:
            fx_private_setColor(FOREGROUND_GREEN | FOREGROUND_BLUE);
            break;
        case 7:
            return(setTextColor(spawnRandom(0, 6)));
        case 255:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
            break;
        default:
            flag = false;
            break;
        }
        return !flag;
    }

    filePath filePathSegmentingHelper(string fullPath)
    {
        filePath ans;
        // copy full path of file
        // process(add or remove) quotes
        string temp;		// temporarily store not completely processed path
        bool hasQuotes;
        int i;
        if (fullPath[0] == '\"')
        {
            hasQuotes = true;
            ans.fullPathWithQuotes = fullPath;

            // remove quotes
            i = 1;
            while (fullPath[i] != '\"')
            {
                temp += fullPath[i];
                ++i;
            }
            ans.fullPath = temp;
        }
        else
        {
            hasQuotes = false;
            ans.fullPath = fullPath;

            // add quotes
            i = 0;

            ans.fullPathWithQuotes += "\"";
            ans.fullPathWithQuotes += fullPath;
            ans.fullPathWithQuotes += "\"";
        }

        // judge if there's no substring like ":\"(use : as symbol)(":/" is not a word like 'lol', it's
        // :\ in path like "C:\Users".
        //
        // if it did found one, we're gonna add the driver symbol to the struct btw.
        if (ans.fullPath[1] == ':')
        {
            ans.relativePath = false;
            ans.driver = ans.fullPath[0];
        }
        else
        {
            ans.relativePath = true;
        }
        temp = "";

        // separate path
        i = (int)ans.fullPath.length();
        while (fullPath[i] != '\\' && fullPath[i] != '/')
        {
            --i;
        }
        int index = i;		// stores the index of \ in the path
        int fileNameIndex;	// stores the index of . in the file name

        // get path(only)
        for (i = 0; i < (hasQuotes ? index - 1 : index); ++i)
        {
            temp += ans.fullPath[i];
        }
        ans.onlyPath = temp;
        temp = "";

        // add quotes to only_path
        ans.onlyPathHoweverWithQuotes += "\"";
        ans.onlyPathHoweverWithQuotes += ans.onlyPath;
        ans.onlyPathHoweverWithQuotes += "\"";

        // get file name
        for (i = (hasQuotes ? index : index + 1); i < ans.fullPath.length(); ++i)
        {
            temp += ans.fullPath[i];
        }
        ans.fileNameWithSuffix = temp;
        temp = "";

        // separate file name
        bool noSuffix = false;
        i = (int)ans.fileNameWithSuffix.length();
        while (ans.fileNameWithSuffix[i] != '.')
        {
            --i;
            if (i == 1)
            {
                cerr << "Wrong file name\n";
            }
        }
        fileNameIndex = i;

        // get file name(only)
        for (i = 0; i < fileNameIndex; ++i)
        {
            temp += ans.fileNameWithSuffix[i];
        }
        ans.onlyFileName = temp;
        temp = "";

        // get file suffix(only)
        for (i = fileNameIndex + 1; i < ans.fileNameWithSuffix.length(); ++i)
        {
            temp += ans.fileNameWithSuffix[i];
        }
        ans.onlyfileSuffix = temp;
        return ans;
    }

    class colorSX
    {
    public:
        int queryColor(const char* data)
        {
            for (int i = 0; i < 7; i++)
            {
                if (!_strnicmp(this->colorMap[i].index, data, 3))
                {
                    return this->colorMap[i].data;
                }
            }
            return 0;
        }
    private:
        struct cmap
        {
            char index[4];
            int data;
        };
        // map
        const cmap colorMap[8] =
        {
            {"whi",0},
            {"red",1},
            {"gre",2},
            {"blu",3},
            {"yel",4},
            {"pur",5},
            {"cya",6},
            {"rnd",7}
        };
    };
    struct cText
    {
        string plain;
        vector<int> color;
    };
    bool outputLine(cText input)
    {
        int i;
        for (i = 0; i < input.plain.length(); i++)
        {
            if (input.color[i] == -1)
            {
                setConsoleColor(ESC_CONSOLE_COLOR_BLACK, ESC_CONSOLE_COLOR_RED);
                setTextColor(ESC_COLOR_BLUE);
                cerr << "Error when attempt to solve the file!\n";
                setTextColor(ESC_COLOR_PUREWHITE);
                return true;
            }
            if (input.color[i] != 255)
            {
                setTextColor(input.color[i]);
            }
            printf("%c", input.plain[i]);
        }
        for (; i < input.color.size(); i++)
        {
            if (input.color[i] != 255)
            {
                setTextColor(input.color[i]);
            }
        }
        return false;
    }
    cText outputWFModifiersProcess(char* input)
    {
        cText res;
        string ans;
        string tmp;
        colorSX control;
        for (int i = 0; i < strlen(input); i++)
        {
            tmp = "";
            //check modifers
            if (input[i] == '\\')
            {
                ++i;
                switch (input[i])
                {
                case 'n':
                    ans += '\n';
                    break;
                case 'a':
                    ans += '\a';
                    break;
                case 'b':
                    ans += '\b';
                    break;
                case 'r':
                    ans += '\r';
                    break;
                case 't':
                    ans += '\t';
                    break;
                case 'c':
                    for (int j = 0; j < 3; j++)
                    {
                        ++i;
                        tmp += input[i];
                    }
                    if (res.color.empty() || res.color[res.color.size()-1]==255)
                    {
                        res.color.push_back(control.queryColor(tmp.c_str()));
                    }
                    else
                    {
                        res.color[res.color.size() - 1] = control.queryColor(tmp.c_str());
                    }
                    continue;
                case '\\':
                    ans += '\\';
                    break;
                    // wrong input
                default:
                    ans += '?';
                    break;
                }
                res.color.push_back(255);
                continue;
            }
            ans += input[i];
            res.color.push_back(255);
        }
        res.plain = ans;
        return res;
    }
    /// <summary>
    /// output a with-format text file, MAY NOT WORK WITH ios::sync_with_stdio(0)
    /// </summary>
    /// <param name="filePath">path of the file</param>
    /// <param name="lnFrom">from which line(use 0 as the head of the file)</param>
    /// <param name="lnTo">to which line(use -1 to the end of the file)</param>
    /// <returns>Success? if it did it then return false</returns>
    bool outputWF(string filePath, int lnFrom, int lnTo)
    {
        // temporarily store the content of the file
        char buffer[_Esc_maxn];
        // store the output of the file
        string storage;
        // file process
        fstream fin;
        fin.open(filePath);
        if (fin.fail())
        {
            return true;
        }

        // read file
        int i;
        for (i = 0; i < lnFrom; i++)
        {
            fin.getline(buffer, _Esc_maxn);
            if (fin.eof())
            {
                fin.close();
                return true;
            }
        }

        // process file
        cText res;
        if (lnTo == -1)
        {
            // theres a problem when using fin.eof(), so I have to use
            // fin.peek == EOF.
            while (!(fin.peek() == EOF))
            {
                res.plain = "";
                res.color.clear();
                // input file
                fin.getline(buffer, _Esc_maxn);
                res = outputWFModifiersProcess(buffer);
                // output file
                outputLine(res);
                printf("\n");
            }
            fin.close();
        }
        else
        {
            for (; i < lnTo; i++)
            {
                if (fin.eof())
                {
                    fin.close();
                    return true;
                }
                res.plain = "";
                res.color.clear();
                // input file
                fin.getline(buffer, _Esc_maxn);
                res = outputWFModifiersProcess(buffer);
                // output file
                outputLine(res);
                printf("\n");
            }
        }

        return false;
    }

    /// <summary>
    /// output a plain text file, MAY NOT WORK WITH ios::sync_with_stdio(0)
    /// </summary>
    /// <param name="filePath">path of the file</param>
    /// <param name="lnFrom">from which line(use 0 as the head of the file)</param>
    /// <param name="lnTo">to which line(use -1 to the end of the file)</param>
    /// <returns>Success? if it did it then return false</returns>
    bool outputNF(string filePath, int lnFrom, int lnTo)
    {
        // temporarily store the content of the file
        char buffer[_Esc_maxn];
        // store the output of the file
        string storage;
        // file process
        fstream fin;
        fin.open(filePath);
        if (fin.fail())
        {
            return true;
        }

        // read file
        int i;
        for (i = 0; i < lnFrom; i++)
        {
            fin.getline(buffer, _Esc_maxn);
            if (fin.eof())
            {
                fin.close();
                return true;
            }
        }

        if (lnTo == -1)
        {
            // theres a problem when using fin.eof(), so I have to use
            // fin.peek == EOF.
            while (!(fin.peek() == EOF))
            {
                // i&o
                fin.getline(buffer, _Esc_maxn);
                puts(buffer);
            }
            fin.close();
        }
        else
        {
            for (; i < lnTo; i++)
            {
                if (fin.eof())
                {
                    fin.close();
                    return true;
                }
                // i&o
                fin.getline(buffer, _Esc_maxn);
                puts(buffer);
            }
        }

        return false;
    }

    bool readConfigBool(string filePath, string name) // input config file£¬ target type is bool
    {
        // open file
        ifstream input;
        input.open(filePath);
        if (!input.is_open())
        {
            cerr << "Failed open config file :\"" << filePath << "\" !";
            exit(-2);
        }

        // read line by line
        string temp;
        char tmp[1001] = { "\0" };
        string nodeName;
        bool nodeValue = 0;
        size_t i;
        while (!input.eof())
        {
            nodeName = "";
            i = 0;
            input.getline(tmp, sizeof(tmp));
            temp = tmp;
            if (temp[0] == '#') // jump the notes
            {
                continue;
            }
            for (; i < temp.length(); i++) // get name
            {
                if (temp[i] == '=')
                {
                    i++;
                    break;
                }
                nodeName += temp[i];
            }
            if (nodeName != name) // name is simillar with the target?
            {
                continue;
            }



            if (temp[i] == 't' || temp[i] == 'T') // get the value
            {
                return 1;
            }
            else
            {
                return 0;
            }
            break;
        }
        return 0;
    }
    int readConfigInt(string filePath, string name) // input config, target type is int
    {
        ifstream input;
        int result = 0;
        input.open(filePath);
        if (!input.is_open())
        {
            cerr << "Failed open config file :\"" << filePath << "\" !";
            exit(-2);
        }
        string temp;
        char tmp[1001] = { "\0" };
        string nodeName;
        bool nodeValue = 0;
        size_t i;
        while (!input.eof())
        {
            nodeName = "";
            i = 0;
            input.getline(tmp, sizeof(tmp));
            temp = tmp;
            if (temp[0] == '#')
            {
                continue;
            }
            for (; i < temp.length(); i++)
            {
                if (temp[i] == '=')
                {
                    i++;
                    break;
                }
                nodeName += temp[i];
            }
            if (nodeName != name)
            {
                continue;
            }

            for (; i < temp.length(); i++)
            {
                result *= 10;
                result += temp[i] - 48;
            }
            break;
        }

        return result;
    }
    string readConfigStr(string filePath, string name) // input config, target type is string
    {
        ifstream input;
        string result;
        input.open(filePath);
        if (!input.is_open())
        {
            cerr << "Failed open config file :\"" << filePath << "\" !";
            exit(-2);
        }
        string temp;
        char tmp[1001] = { "\0" };
        string nodeName;
        bool nodeValue = 0;
        size_t i;
        while (!input.eof())
        {
            nodeName = "";
            i = 0;
            input.getline(tmp, sizeof(tmp));
            temp = tmp;
            if (temp[0] == '#')
            {
                continue;
            }
            for (; i < temp.length(); i++)
            {
                if (temp[i] == '=' && temp[i + 1] == '\"')
                {
                    i += 2;
                    break;
                }
                nodeName += temp[i];
            }
            if (nodeName != name)
            {
                continue;
            }

            for (; i < temp.length(); i++)
            {
                if (temp[i] != '\"')
                {
                    result += temp[i];
                }
                else
                {
                    break;
                }
            }
            break;
        }
        return result;
    }
}

namespace esc
{
    void NoIOSyncLagging(void)
    {
        ios::sync_with_stdio(0);
        cin.tie(0);
        return;
    }

    /// <summary>
    /// spawn a random number between min and max
    /// </summary>
    /// <param name="min">min</param>
    /// <param name="max">max</param>
    /// <returns>the result(may be min or max)</returns>
    inline int spawnRandom(int min, int max)
    {
        return _Escapement::spawnRandom(min, max);
    }

    /// <summary>
    /// Cotrols the console color(permanently if no further modifing)
    /// use the difinition like ESC_CONSOLE_COLOR_RED
    /// more colors, but NOT recommend
    /// </summary>
    /// <param name="foreground">the color of foreground</param>
    /// <param name="background">the color of background</param>
    inline void setConsoleColor(char foreground, char background)
    {
        _Escapement::setConsoleColor(foreground, background);
        return;
    }
    /// <summary>
    /// Temporarily controls the current color for further output
    /// RECOMMEND
    /// </summary>
    /// <param name="color">use the definition like ESC_COLOR_???</param>
    /// <returns>whether it successes, if it did it then return false</returns>
    inline bool setTextColor(int color)
    {
        return _Escapement::setTextColor(color);
    }

    /// <summary>
    /// segmentes a file path (simple string) to the recommend struct(filePath)
    /// </summary>
    /// <param name="fullPath">the full path of a file</param>
    /// <returns>the segmented path of the file</returns>
    inline filePath filePathSegmentingHelper(string fullPath)
    {
        return _Escapement::filePathSegmentingHelper(fullPath);
    }

    /// <summary>
    /// output a with-format text file, MAY NOT WORK WITH ios::sync_with_stdio(0)
    /// </summary>
    /// <param name="filePath">path of the file</param>
    /// <param name="lnFrom">from which line(use 0 as the head of the file)</param>
    /// <param name="lnTo">to which line(use -1 to the end of the file)</param>
    /// <returns>Success? if it did it then return false</returns>
    inline bool outputWF(string filePath, int lnFrom, int lnTo)
    {
        return _Escapement::outputWF(filePath, lnFrom, lnTo);
    }
    /// <summary>
    /// output a plain text file, MAY NOT WORK WITH ios::sync_with_stdio(0)
    /// </summary>
    /// <param name="filePath">path of the file</param>
    /// <param name="lnFrom">from which line(use 0 as the head of the file)</param>
    /// <param name="lnTo">to which line(use -1 to the end of the file)</param>
    /// <returns>Success? if it did it then return false</returns>
    inline bool outputNF(string filePath, int lnFrom, int lnTo)
    {
        return _Escapement::outputNF(filePath, lnFrom, lnTo);
    }

    /// <summary>
    /// read a bool value from a config file
    /// config file:
    /// name = true
    /// name = false
    /// #this is note
    /// </summary>
    /// <param name="filePath">path of the config file</param>
    /// <param name="name">name of the tag</param>
    /// <returns>value if success</returns>
    inline bool readConfigBool(string filePath, string name)
    {
        return _Escapement::readConfigBool(filePath, name);
    }
    /// <summary>
    /// read a int value from a config file
    /// config file:
    /// name = value
    /// #this is note
    /// </summary>
    /// <param name="filePath">path of the config file</param>
    /// <param name="name">name of the tag</param>
    /// <returns>value if success</returns>
    inline int readConfigInt(string filePath, string name)
    {
        return _Escapement::readConfigInt(filePath, name);
    }
    /// <summary>
    /// read a string value from a config file
    /// config file:
    /// name = "value"
    /// #this is note
    /// </summary>
    /// <param name="filePath">path of the config file</param>
    /// <param name="name">name of the tag</param>
    /// <returns>value if success</returns>
    inline string readConfigStr(string filePath, string name)
    {
        return _Escapement::readConfigStr(filePath, name);
    }

    HWND getConsoleHWND()
    {
        HWND hwnd;
        hwnd = FindWindow(L"ConsoleWindowClass", NULL);
        return hwnd;
    }

    /// <summary>
    /// check if key <KEYCODE> is down
    /// use KEY_??? instead keycode will be more
    /// convient
    /// </summary>
    /// <param name="KeyCode"></param>
    /// <returns>if the key is down then return true</returns>
    inline bool keyDown(int KeyCode)
    {
        return KEY_DOWN(KeyCode);
    }

    /// <summary>
    /// change the encoding of the page
    /// e.g. chcp(ESC_CHCP_UNICODE)...
    /// enter location for specified encoding(without this step the console may not
    /// display the correct text in others' computers).
    /// </summary>
    /// <param name="type">chcp type</param>
    inline void chcp(string type)
    {
        cmd("chcp " + type + ">nul");
        return;
    }

    // msgboxes
    inline void msgbox(HWND hwnd,LPCSTR text,LPCSTR capt)
    {
        MessageBoxA(hwnd, text, capt, MB_OK);
        return;
    }
    inline void msgboxS(HWND hwnd, LPCSTR text, LPCSTR capt)
    {
        MessageBoxA(hwnd, text, capt, MB_OK | MB_SYSTEMMODAL);
        return;
    }
    inline void Wrngbox(HWND hwnd, LPCSTR text, LPCSTR capt)
    {
        MessageBoxA(hwnd, text, capt, MB_OK | MB_SYSTEMMODAL | MB_ICONWARNING);
        return;
    }
    inline void Errbox(HWND hwnd, LPCSTR text, LPCSTR capt)
    {
        MessageBoxA(hwnd, text, capt, MB_OK | MB_SYSTEMMODAL | MB_ICONHAND);
        return;
    }

    // process options
    // suspend a process
    bool procSuspend(DWORD PID)
    {
        typedef LONG(NTAPI* NtSuspendProcess)(IN HANDLE ProcessHandle);
        HANDLE processHandle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, PID);
        if (!processHandle)
        {
            return 1;
        }
        NtSuspendProcess pfnNtSuspendProcess =
            (NtSuspendProcess)GetProcAddress(GetModuleHandle(L"ntdll"), "NtSuspendProcess");
        if (!pfnNtSuspendProcess)
        {
            return 1;
        }
        pfnNtSuspendProcess(processHandle);
        CloseHandle(processHandle);
        return 0;
    }
    // resume a process
    bool procResume(DWORD PID)
    {
        typedef LONG(NTAPI* NtResumeProcess)(IN HANDLE ProcessHandle);
        HANDLE processHandle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, PID);
        if (!processHandle)
        {
            return 1;
        }
        NtResumeProcess pfnNtResumeProcess =
            (NtResumeProcess)GetProcAddress(GetModuleHandle(L"ntdll"), "NtResumeProcess");
        if (!pfnNtResumeProcess)
        {
            return 1;
        }
        pfnNtResumeProcess(processHandle);
        CloseHandle(processHandle);
        return 0;
    }
    inline void procKill(DWORD PID)
    {
        cmd("taskkill /f /pid " + to_string((int)PID));
    }
    inline void procKillTree(DWORD PID)
    {
        cmd("taskkill /t /f /pid" + to_string((int)PID));
    }
    inline void procKillName(string name)
    {
        cmd("taskkill /f /im " + name);
    }
    inline void procKillTreeName(string name)
    {
        cmd("taskkill /t /f /im" + name);
    }
}

/// HEY READ THIS
/*
This file is set to be moved into BullwhipCommon, a library to help me use my projects more efficiently.
Don't expect this to be directly accesible in the near future.


*/
#pragma once
//Simple file library.
#include <fstream>
#include <string>
#include <sstream>
#include <windows.h>

class inFile
{
    public:
        inFile();
        void OpenFile(std::string filename);
        char* ReadBlock(int size);
        std::string ReadString();
        float ReadFloat();
        int ReadInt();
        BYTE ReadByte();
        void Close();
    protected:
    private:
        std::ifstream* f;
};


class outFile
{
    public:
        outFile();
        void OpenFile(std::string filename);
        void WriteBlock(char* data);
        void WriteString(std::string str);
        void WriteFloat(float ff);
        void WriteInt(int ff);
        void WriteByte(BYTE ff);
        void Close();
    protected:
    private:
        std::ofstream* f;
};

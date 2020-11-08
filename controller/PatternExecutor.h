//
// Created by djnic on 06.11.2020.
//

#ifndef SUFFIXTABLE_PATTERNEXECUTOR_H
#define SUFFIXTABLE_PATTERNEXECUTOR_H


#include "FileExecutor.h"
#include "../model/PTable.h"

class PatternExecutor {
    FileExecutor *fileExecutor;

    List<std::string> patterns;

    std::string text;

    std::string pathToResultFile;
public:
    PatternExecutor(FileExecutor *fileExecutor, std::string pathToResultFile, std::string pathToPatternFile,
                    std::string pathToTextFile);

    bool findAll(PTable *pTable);

    void setFileExecutor(FileExecutor *fileExecutor);
};


#endif //SUFFIXTABLE_PATTERNEXECUTOR_H

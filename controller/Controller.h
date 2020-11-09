//
// Created by djnic on 09.11.2020.
//

#ifndef SUFFIXTABLE_CONTROLLER_H
#define SUFFIXTABLE_CONTROLLER_H


#include "../model/AlgorithmExecutor.h"
#include "../model/FileExecutor.h"
#include "../model/PatternExecutor.h"

class Controller {
    //View
    FileExecutor *fileExecutor = new FileExecutor();
    AlgorithmExecutor *algorithmExecutor;
    PatternExecutor *patternExecutor;
    std::string pathToTextFile;
    std::string pathToResultFile;
    std::string pathToPatternFile;
public:
    void initializeApp();

    bool generateResults();

    void shutDownApp();

    void setPathToTextFile(const std::string &pathToTextFile);

    void setPathToResultFile(const std::string &pathToResultFile);

    void setPathToPatternFile(const std::string &pathToPatternFile);

    void setAlgorithmExecutor(const std::string algorithm);
};


#endif //SUFFIXTABLE_CONTROLLER_H
#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{}

TargetGenerator::~TargetGenerator()
{
    for(std::map<std::string,ATarget*>::iterator it = targets.begin(); it != targets.end(); it++)
    {
        delete it->second;
    }
    targets.clear();
}

void TargetGenerator::learnTargetType(ATarget *target)
{
    if(target)
        targets.insert(make_pair(target->getType(), target->clone()));
}

void TargetGenerator::forgetTargetType(std::string const &type)
{
    std::map<std::string,ATarget*>::iterator it = targets.find(type);
    if( it != targets.end())
    {
        delete it->second;
        targets.erase(type);
    }
}

ATarget* TargetGenerator::createTarget(std::string const &target)
{
    std::map<std::string,ATarget*>::iterator it = targets.find(target);
    return it != targets.end() ? it->second : NULL;
}
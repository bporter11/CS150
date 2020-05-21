/*
 *	@file h35.h
 *  @author Your name goes here
 *  @version  what day and meeting time
 */
#ifndef H35_H_
#define H35_H_

#include <string>

/////// Declare all of your classes here ////////////////
/////// In this order: Worker, SalariedWorker, HourlyWorker
class Worker
{
protected:
 std::string name_;
 double rate_;
    public:
     Worker() = default;
     virtual ~Worker() = default;
     Worker(const std::string& name , double r);
     std::string getName() const;
     double getRate() const;
     virtual std::string payInfo(int hour) = 0;


};
class SalariedWorker : public Worker
{
    public:
    SalariedWorker() = default;
    SalariedWorker(const std::string& name , double r);
    std::string payInfo(int hour);
};
class HourlyWorker : public Worker
{
    HourlyWorker() = default;
    HourlyWorker(const std::string& name , double r);
    std::string payInfo(int hour);
};




#endif

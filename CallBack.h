#ifndef _CALLBACK_H_
#define _CALLBACK_H_

class CallBack{
public:
  CallBack() =default;
  CallBack(const CallBack&) = delete;
  CallBack(const CallBack&&) = delete;
  CallBack& operator=(const CallBack&) = delete;
  CallBack&& operator=(const CallBack&&) = delete;

  void init();

  std::function<void(int)> handleInt;
};


#endif
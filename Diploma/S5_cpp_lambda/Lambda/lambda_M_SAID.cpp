#include<iostream>
#include<array>
#include<functional>
void CommStackOnEvent(std::function<void (bool&) > cbk);
void Send()
{
    auto send_data = []()->bool{ 
                    std::cout << "send data is called in commStack" << std::endl;
                    return true; };

    auto onEvent = [&send_data](bool & response){ 
        response = send_data();
        return true;};
        
   CommStackOnEvent(onEvent);
}

void CommStackOnEvent(std::function<void (bool&) > cbk)
{
    //execution
    bool response = false;
    cbk(response);
    if(response)
    {
        std::cout << "Handling error" <<std::endl;
    }
    else
    {
         std::cout << "Handling request" <<std::endl;
    }
}


void Send2(std::function<bool (void)> send_data_cbk)
{
    auto onEvent = [&send_data_cbk](bool & response){ 
        response = send_data_cbk();
        return true;};

   CommStackOnEvent(onEvent);
}


int main() {

    constexpr int array_size = 5;
    std::array<int ,array_size> nums = {1 , 2 , 3 , 4 ,5};


    Send();

    auto send_data = []()->bool{ 
                    std::cout << "send data is called in commStack" << std::endl;
                    return false; };
    Send2(send_data);

   return 0;
}
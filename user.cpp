#include "user.h"
#include <string>

using namespace std;


void User::create_group(string group_name, string group_title=""){
    string message = string("http://api.barafardayebehtar.ml:8080/")+"creategroup"+"?"+"token="+token+"group_name="+group_name;
    if (group_title!="") message += group_title;

}

void User::create_channel(string channel_name, string channel_title="") {
    string message = string("http://api.barafardayebehtar.ml:8080/")+"createchannel"+"?"+"token="+token+"&channel_name="+channel_name;
    if (channel_title!="") message += ("&channel_title"+channel_title);
}

void User::get_userlist() {
    string message = string("http://api.barafardayebehtar.ml:8080/")+"getuserlist"+"?"+"token="+token;

}

void User::get_grouplist() {
    string message = string("http://api.barafardayebehtar.ml:8080/")+"getgrouplist"+"?"+"token="+token;

}

void User::get_channellist() {
    string message = string("http://api.barafardayebehtar.ml:8080/")+"getchannellist"+"?"+"token="+token;

}

void User::get_userchats(int dst, string date="") {
    string message = string("http://api.barafardayebehtar.ml:8080/")+"getuserchats"+"?"+"token="+token+"&dst="+to_string(dst);
    if (date!="") message += ("&date"+date);

}

void User::get_groupchats(int dst, string date) {
    string message = string("http://api.barafardayebehtar.ml:8080/")+"getgroupchats"+"?"+"token="+token+"&dst="+to_string(dst);
    if (date!="") message += ("&date"+date);

}

void User::get_channelchats(int dst, string date) {
    string message = string("http://api.barafardayebehtar.ml:8080/")+"getchannelchats"+"?"+"token="+token+"&dst="+to_string(dst);
    if (date!="") message += ("&date"+date);

}

void User::join_group(string group_name) {
    string message = string("http://api.barafardayebehtar.ml:8080/")+"joingroup"+"?"+"token="+token+"&groupname="+group_name;

}

void User::join_channel(string channel_name) {
    string message = string("http://api.barafardayebehtar.ml:8080/")+"joinchannel"+"?"+"token="+token+"&channelname="+channel_name;

}

void User::send_messageuser(string dst_username, string body) {
    string message = string("http://api.barafardayebehtar.ml:8080/")+"sendmessageuser"+"?"+"token="+token+"&dst="+dst_username+"&body="+body;

}

void User::send_messasgegroup(string dst_username, string body) {
    string message = string("http://api.barafardayebehtar.ml:8080/")+"sendmessagegroup"+"?"+"token="+token+"&dst="+dst_username+"&body="+body;

}

void User::send_messagechannel(string dst_username, string body) {
    string message = string("http://api.barafardayebehtar.ml:8080/")+"sendmessagechannel"+"?"+"token="+token+"&dst="+dst_username+"&body="+body;

}

void User::create_chat(string dst_username) {
//    PrivateChat privatechat(dst_username);

}

void User::GetProf(string user_name1, string password1, string token1)
{
    user_name = user_name1;
    password = password1;
    token = token1;
}



#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include<cstdlib>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


int main()
{
    struct st_msg_data {
        int soluong;
        string check;
    };

    struct st_msg_state_global {
        int soluong;
        string check;
    };

    st_msg_data* st_mess1 = (st_msg_data*)calloc(1, sizeof(st_msg_data));
    st_mess1->soluong = 4;
    st_mess1->check = "sonhong";
    cout << "ket qua: " << st_mess1->soluong << " - " << st_mess1->check;
    cout << endl;
    // fwrite in file because file don't
    st_msg_data* st_mess2 = (st_msg_data*)calloc(1, sizeof(st_msg_data));
    st_mess2->soluong = 9;
    st_mess2->check = "aaaaaaa";

    int32_t byte_read = 0;
    st_msg_state_global* setting_profile;
    st_msg_state_global* setting_profile1;

    FILE* fptr = fopen("C:\\Users\\ABC\\source\\repos\\file_contro_doituong\\son.bin", "r+b");  // file nhi phan : .bin , file text  .text

    if (NULL == fptr) {
        cout << "fptr NUll";
        fptr = fopen("C:\\Users\\ABC\\source\\repos\\file_contro_doituong\\son.bin", "wb+");
        fwrite(st_mess1, sizeof(st_msg_data), 1, fptr);
        fclose(fptr);
        cout << "ghi vao file success" << endl;
        fptr = fopen("C:\\Users\\ABC\\source\\repos\\file_contro_doituong\\son.bin", "r+b");
    }
    cout << "1" << endl;
    fseek(fptr, 0, SEEK_SET);
    cout << "2" << endl;
    setting_profile = (st_msg_state_global*)calloc(1, sizeof(st_msg_state_global));
    setting_profile1 = (st_msg_state_global*)calloc(1, sizeof(st_msg_state_global));
    cout << "3" << endl;
    if (NULL == setting_profile) {
        fclose(fptr);
        cout << "setting_profile is Null" << endl;
        return 0;
    }
   // while (!feof(fptr)) {
        byte_read = fread(setting_profile, sizeof(st_msg_state_global), 1, fptr);
        cout << "byte_read: " << byte_read << endl;
        cout << " sizeof(st_msg_state_global): " << sizeof(st_msg_state_global) << endl;
        cout << " int sizeof(st_msg_state_global): " <<(int) sizeof(st_msg_state_global) << endl;
        // in struct vua coppy dk
        cout << " setting_profile.soluong: " << setting_profile->soluong << endl;
        cout << " setting_profile.check " << setting_profile->check << endl;

        if (byte_read == 1) {
            cout << "4" << endl;
            memcpy(&(setting_profile->soluong), &(st_mess2->soluong), sizeof(setting_profile->soluong));
            memcpy(&(setting_profile->check), &(st_mess2->check), sizeof(setting_profile->check));
            // in struct vua memcoppy dk
            cout << " setting_profile.soluong: " << setting_profile->soluong << endl;
            cout << " setting_profile.check " << setting_profile->check << endl;

            cout << "da coppy success" << endl;
            if (fseek(fptr, 0 - sizeof(st_msg_state_global), SEEK_CUR) == 0) // dua con tro file ve vi tri dau file
            {
                if (fwrite(setting_profile, sizeof(st_msg_state_global), 1, fptr) > 0) {
                    /*fwrite ghi 1 ddoois tuong co kich thuoc sizeof() tu struct duoc tro boi setting_profile
                     vao con tro file fptr*/
                    fseek(fptr, 0 - sizeof(st_msg_state_global), SEEK_CUR);
                    fread(setting_profile1, sizeof(st_msg_state_global), 1, fptr);
                    // in struct vua memcoppy dk
                    cout << " 1111.soluong: " << setting_profile1->soluong << endl;
                    cout << " 1111111.check: " << setting_profile1->check << endl;
                    cout << " ghi thanh cong va ket thuc";
                    if (0 == fflush(fptr)) {
                        // fsync(fileno(fptr));
                        fclose(fptr);
                        fptr = NULL;
                    }
                    else {
                    }
                }
            }
        }

   // }
   
    if (NULL != fptr) {
        fclose(fptr);
        fptr = NULL;
    }
    free(setting_profile);
    setting_profile = NULL;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
// write into file demo
/*void btmsg_update_device_profile_config_demo(st_msg_state_global* state_global, const uint8_t* type) {
    DLOG_INFO(eLOG_RSI, "[messaging] Start");
    int32_t i = 0;
    int32_t byte_read = 0;
    st_msg_state_global* setting_profile;
    FILE* fptr = fopen(BTMSG_FILENAME_USER_PROFILES_DEMO, "r+b");
    if (NULL == fptr) {
        DLOG_ERROR(eLOG_MSG, "Cannot open user profile");
        return;
    }
    fseek(fptr, 0, SEEK_SET);
    setting_profile = (st_msg_state_global*)calloc(1, sizeof(st_msg_state_global));
    if (NULL == setting_profile) {
        DLOG_ERROR(eLOG_MSG, "Cannot calloc device profile");
        fclose(fptr);
        return;
    }
    byte_read = fread(setting_profile, sizeof(st_msg_state_global), 1, fptr);
    if (byte_read == 1) {
        if (0 == strcmp(type, "service_configuration")) {
            memcpy(&(setting_profile->state_reject), &(state_global->state_reject), sizeof(setting_profile->state_reject));
        }
        else {}
        if (fseek(fptr, 0 - sizeof(st_msg_state_global), SEEK_CUR) == 0)
        {
            if (fwrite(setting_profile, sizeof(st_msg_state_global), 1, fptr) > 0) {
                if (0 == fflush(fptr)) {
                    fsync(fileno(fptr));
                    fclose(fptr);
                    fptr = NULL;
                    DLOG_INFO(eLOG_MSG, "Update successfully");
                }
                else {
                    DLOG_INFO(eLOG_MSG, "Update not successfully");
                }
            }
        }
    }
    if (NULL != fptr) {
        fclose(fptr);
        fptr = NULL;
    }
    free(setting_profile);
    setting_profile = NULL;
} */
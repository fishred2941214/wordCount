#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main(int argc, char *argv[])
{
     int in, out, m = 0, n = 10, i, get, count=0;//countͳ�ƹ��ж��ٸ����з�
     int characters = 0, words = 0, lines = 0;
     char ch;
     char* ff;
     string strp, strpp;//����󵥴ʴ���strp�У�����ԡ� ���ָ�
 /*    for (i = 1; i < argc; i++) {
          cout << argv[i] << endl;
     }
 *///��������
     for (i = 1; i < argc; i++) {
          ff = argv[i];
          if ((get = strcmp("-i", ff)) == 0) {
               in = i + 1;
          }
          if ((get = strcmp("-o", ff)) == 0) {
               out = i + 1;
          }
          if ((get = strcmp("-m", ff)) == 0) {
               m = atoi(argv[i + 1]);
          }
          if ((get = strcmp("-n", ff)) == 0) {
               n = atoi(argv[i + 1]);
          }
     }
     fstream infile(argv[in], ios::in);       //ָ�������ļ�������
     fstream outfile(argv[out], ios::out);     //ָ������ļ�������.
     //�������뵥�ʣ��м��Կո�ָ�
     infile >> strp; 
     while (infile >> strpp) {
          strp = strp + ' ' +  strpp;
     }

     infile.clear();
     infile.seekg(0, ios::beg);
     while (1) {
          if ((ch = infile.get()) == '\n') {
               count++;
          }
          else if (ch == EOF) {
               break;
          }
     }
     cout << strp << endl;//������cmd�в鿴���
     cout << count;//������м���
     //�ļ����
     outfile << "characters:" << characters << endl;
     outfile << "words:" << words << endl;
     outfile << "lines:" << lines << endl;
     for (i = 0; i <= n; i++) {
          outfile << '<' << "str" << '>:' << "times";
     }     
}

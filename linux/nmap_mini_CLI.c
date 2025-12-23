#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(){
    printf("NMAP CLI\n");
    sleep(1);
    printf("scan type:\nintense scan (1)\nintense scan UDP (2)\nintense scan + all TCP ports (3)\nintense scan + no ping (4)\nping scan (5)\nquick scan (6)\nquick scan plus (7)\nquick traceroute (8)\nregual scan (9)\nslow comprehensive scan(10)\n");
        int choix;
        printf("wich one:");
        scanf("%d", &choix);
        sleep(1);
        if (choix == 1)
        {
            char ip[14];
                system("clear");
                printf("ip: ");
                scanf("%s", &ip);
                char last_command[100];
                sprintf(last_command, "sudo nmap -T4 -A -v -oN rapport.txt %s", ip);
                system(last_command);
                return 0;
        }
                if (choix == 2)
        {
            char ip[14];
                system("clear");
                printf("ip: ");
                scanf("%s", &ip);
                char last_command[100];
                sprintf(last_command, "sudo nmap -sS -sU -T4 -A -v -oN rapport.txt %s", ip);
                system(last_command);
                return 0;
        }
                if (choix == 3)
        {
            char ip[14];
                system("clear");
                printf("ip: ");
                scanf("%s", &ip);
                char last_command[100];
                sprintf(last_command, "sudo nmap -p 1-65535 -T4 -A -v -oN rapport.txt %s", ip);
                system(last_command);
                return 0;
        }
                if (choix == 4)
        {
            char ip[14];
                system("clear");
                printf("ip: ");
                scanf("%s", &ip);
                char last_command[100];
                sprintf(last_command, "sudo nmap -T4 -A -v -Pn -oN rapport.txt %s", ip);
                system(last_command);
                return 0;
        }
                if (choix == 5)
        {
            char ip[14];
                system("clear");
                printf("ip: ");
                scanf("%s", &ip);
                char last_command[100];
                sprintf(last_command, "sudo nmap -sn -oN rapport.txt %s", ip);
                system(last_command);
                return 0;
        }
                if (choix == 6)
        {
            char ip[14];
                system("clear");
                printf("ip: ");
                scanf("%s", &ip);
                char last_command[100];
                sprintf(last_command, "sudo nmap -T4 -F rapport.txt %s", ip);
                system(last_command);
                return 0;
        }
                if (choix == 7)
        {
            char ip[14];
                system("clear");
                printf("ip: ");
                scanf("%s", &ip);
                char last_command[100];
                sprintf(last_command, "sudo nmap -sV -T4 -O -F --version-light -oN rapport.txt %s", ip);
                system(last_command);
                return 0;
        }
                if (choix == 8)
        {
            char ip[14];
                system("clear");
                printf("ip: ");
                scanf("%s", &ip);
                char last_command[100];
                sprintf(last_command, "sudo nmap -sn --traceroute rapport.txt %s", ip);
                system(last_command);
                return 0;
        }
                if (choix == 9)
        {
            char ip[14];
                system("clear");
                printf("ip: ");
                scanf("%s", &ip);
                char last_command[100];
                sprintf(last_command, "sudo nmap -oN rapport.txt %s", ip);
                system(last_command);
                return 0;
        }
                if (choix == 10)
        {
            char ip[14];
                system("clear");
                printf("ip: ");
                scanf("%s", &ip);
                char last_command[100];
                sprintf(last_command, "sudo nmap -sS -sU -T4 -A -v -PE -PP -PS80,443 -PA3389 -PU40125 -PY -g 53 -oN rapport.txt %s", ip);
                system(last_command);
                return 0;
        }
}
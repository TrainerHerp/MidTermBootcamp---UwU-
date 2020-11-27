int monthConverter(char *month){
    if(strcmp(month, "january")==0) return 1;
    if(strcmp(month, "february")==0) return 2;
    if(strcmp(month, "march")==0) return 3;
    if(strcmp(month, "april")==0) return 4;
    if(strcmp(month, "may")==0) return 5;
    if(strcmp(month, "june")==0) return 6;
    if(strcmp(month, "july")==0) return 7;
    if(strcmp(month, "august")==0) return 8;
    if(strcmp(month, "september")==0) return 9;
    if(strcmp(month, "october")==0) return 10;
    if(strcmp(month, "november")==0) return 11;
    if(strcmp(month, "december")==0) return 12;
    return 0;
}
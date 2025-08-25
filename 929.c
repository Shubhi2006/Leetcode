char *normalizeEmail(const char* email){
    char * result =(char*)malloc(105 *sizeof(char));
    int i=0,j=0;
    while(email[i]!='@'){
        if(email[i]=='+'){
            while(email[i]!='@')i++;
            break;
        }
        if(email[i]!='.'){
            result[j++]=email[i];
        }
        i++;
    }
    while(email[i]!='\0'){
        result[j++]==email[i++];
    }
    result[j++]='\0';
    return result;
}


int numUniqueEmails(char** emails, int emailsSize) {
    char*unique[emailsSize];
    int uniquecount=0;
    for(int i=0;i<emailsSize;i++){
        char* norm=normalizeEmail(emails[i]);
        int exists=0;
        for(int k=0;k<uniquecount;k++){
            if(strcmp(unique[k],norm)==0){
                exists=1;
                break;
            }
        }
        if(!exists){
            unique[uniquecount++]=norm;
        }
        else{
            free(norm);
        }
    }  
    for(int i=0;i<uniquecount;i++){
        free(unique[i]);
    } 
    return uniquecount; 
}

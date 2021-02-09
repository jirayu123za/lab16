void myString(char *&p,int M){
    p = new char[M+1];
    for(int i = 0; i < M;i++) p[i] = 'A'+i;
    p[M]= 0;
}
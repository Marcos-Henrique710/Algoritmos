/*
28. Embaralhar S1 e S2 nos indices pares/ímpares de S3
*/
void q28(){
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string s1,s2; cout<<"Q28: S1:\n"; getline(cin,s1); cout<<"S2:\n"; getline(cin,s2);
    string s3; s3.resize(s1.size()+s2.size());
    int i1=0,i2=0,idx=0;
    while(i1<s1.size() || i2<s2.size()){
        if(idx%2==0){ if(i1<s1.size()) s3[idx++]=s1[i1++]; else if(i2<s2.size()) s3[idx++]=s2[i2++]; }
        else{ if(i2<s2.size()) s3[idx++]=s2[i2++]; else if(i1<s1.size()) s3[idx++]=s1[i1++]; }
    }
    s3.resize(idx);
    cout<<"S3: "<<s3<<"\n";
}


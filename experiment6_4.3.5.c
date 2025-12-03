//4.3.5
int main(){
printf("Name - Rajlakshmi \nSAP ID - 590029493 \nCourse - BCA \nBatch-B5");
printf("\n----------------------------------------------------------------\n");

int i,j,k;
for(i=1;i<=5;i++){
for(k=4;k>=i;k--){
printf(" ");
}
for(j=1;j<=i;j++){
printf("%d",j);
}
printf("\n");
}

return 0;
}

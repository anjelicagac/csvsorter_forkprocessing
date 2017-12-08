#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Sorter.h"
#include <dirent.h>
#include <err.h>
#include <sys/stat.h>
#include  <sys/types.h>
int i, w, x, z;
int y = 0;
int arr[255];
int j;
pid_t pid1;
char * FoundPath;

struct record * table; 
void outputDirectory(char *columnPass, char *OD3, char *nameOfCSV2, int numLines2){
	//printf("%s, ODODODOD %s, %s, %i\n", columnPass, OD3, nameOfCSV2, numLines2);
	int aa;
	char cwd[256];
	getcwd(cwd, sizeof(cwd));
	
	char new_cwd[255]; //Create string for new path
	//printf("OD: %s\n", OD3);
	//printf("%s\n", nameOfCSV2);
	char *newFileName;
	FILE *fp2;
	
	if(OD3[0]!='/'){
		newFileName=strcat(nameOfCSV2,"-sorted-");
		newFileName=strcat(newFileName, columnPass);
		newFileName=strcat(newFileName, ".csv");
		//printf("NFN: %s\n", newFileName);
		sprintf(OD3, "%s/%s", OD3, newFileName);
		//printf("NFN2: %s\n", OD3);	
	}
	else{
		
		newFileName=strcat(nameOfCSV2,"-sorted-");
		newFileName=strcat(newFileName, columnPass);
		newFileName=strcat(newFileName, ".csv");
		sprintf(OD3, "%s/%s", OD3, newFileName);
		//printf("destiny %s\n", OD3);
	}
	fp2=fopen(OD3, "w+");
	
	
	for(aa = 0; aa< numLines2; aa++) {
		if(aa == 11) {
			int x;
			for(x = 0; x < sizeof(table[aa].movie_title); x++ ) {
				if(strcmp(&table[aa].movie_title[x], ",") == 0) {
				fprintf(fp2, "%s,%s,%i,%i,%i,%i,%s,%i,%e,%s,%s,\"%s\",%i,%i,%s,%i,%s,%s,%i,%s,%s,%s,%e,%i,%i,%e,%e,%i\n",table[aa].color,table[aa].director_name,table[aa].num_critic_for_reviews,table[aa].duration,table[aa].director_facebook_likes,table[aa].actor_3_facebook_likes,table[aa].actor_2_name,table[aa].actor_1_facebook_likes,table[aa].gross,table[aa].genres,table[aa].actor_1_name,table[aa].movie_title,table[aa].num_voted_users,table[aa].cast_total_facebook_likes,table[aa].actor_3_name,table[aa].facenumber_in_poster,table[aa].plot_keywords,table[aa].movie_imdb_link,table[aa].nu_user_for_reviews,table[aa].language,table[aa].country,table[aa].content_rating,table[aa].budget,table[aa].title_year,table[aa].actor_2_facebook_likes,table[aa].imdb_score,table[aa].aspect_ratio,table[aa].movie_facebook_likes);
				break;				
				}			
			}
			fprintf(fp2, "%s,%s,%i,%i,%i,%i,%s,%i,%e,%s,%s,%s,%i,%i,%s,%i,%s,%s,%i,%s,%s,%s,%e,%i,%i,%e,%e,%i\n",table[aa].color,table[aa].director_name,table[aa].num_critic_for_reviews,table[aa].duration,table[aa].director_facebook_likes,table[aa].actor_3_facebook_likes,table[aa].actor_2_name,table[aa].actor_1_facebook_likes,table[aa].gross,table[aa].genres,table[aa].actor_1_name,table[aa].movie_title,table[aa].num_voted_users,table[aa].cast_total_facebook_likes,table[aa].actor_3_name,table[aa].facenumber_in_poster,table[aa].plot_keywords,table[aa].movie_imdb_link,table[aa].nu_user_for_reviews,table[aa].language,table[aa].country,table[aa].content_rating,table[aa].budget,table[aa].title_year,table[aa].actor_2_facebook_likes,table[aa].imdb_score,table[aa].aspect_ratio,table[aa].movie_facebook_likes);	
		}
		else fprintf(fp2, "%s,%s,%i,%i,%i,%i,%s,%i,%e,%s,%s,%s,%i,%i,%s,%i,%s,%s,%i,%s,%s,%s,%e,%i,%i,%e,%e,%i\n",table[aa].color,table[aa].director_name,table[aa].num_critic_for_reviews,table[aa].duration,table[aa].director_facebook_likes,table[aa].actor_3_facebook_likes,table[aa].actor_2_name,table[aa].actor_1_facebook_likes,table[aa].gross,table[aa].genres,table[aa].actor_1_name,table[aa].movie_title,table[aa].num_voted_users,table[aa].cast_total_facebook_likes,table[aa].actor_3_name,table[aa].facenumber_in_poster,table[aa].plot_keywords,table[aa].movie_imdb_link,table[aa].nu_user_for_reviews,table[aa].language,table[aa].country,table[aa].content_rating,table[aa].budget,table[aa].title_year,table[aa].actor_2_facebook_likes,table[aa].imdb_score,table[aa].aspect_ratio,table[aa].movie_facebook_likes);
	
	}
}

void traverseFile(char*userInput, char *FilePath, char * OD2, char * nameOfCSV){ //Column they are sorting by, path to the csv
	
	FILE *fp=fopen(FilePath, "r");
	int counter=0;
	int numLines=0;
	char *row = malloc(100000 * sizeof(char)); //char array for the row
	table = malloc(504400 * sizeof(struct record));
	
	fgets(row, 10000, fp); //checks first line
	
	char *check1=strdup(row);
	char *check2;
	
	int checkCols=0;
	int validSort=0;
	
	while(check1!=NULL){
		check2=strsep(&check1, ",");
		if (strcmp(userInput, check2)==0){ //String that user entered matches a column
			validSort=1;
		}
		checkCols++;
	}
	
	//printf("Checked column number: %i\n", checkCols);
	
	if(validSort!=1 || checkCols!=28){ //Cannot perform the sort
		return;
	}
	
	int row_count=0;

	while(fgets(row, 10000, fp) != NULL) { //read in file using fgets || row = whole line || change to row_count < 5043
		numLines++;
		char *token = strdup(row);
		char * token2;
		int col=0;
		while(col < 28) {	
			//printf("%s \n", token); //has whatever is leftover
			char * qq  = "\"";
	
			if(col == 11) { //checking movie_title
				char * ff = &token[0];
				//printf("ff %s   --\n", ff);
				if( strstr(ff, qq) != NULL ) {
				//	printf("FOUND \n");
					token ++;
					token2 = strsep(&token, qq);
					token ++;
				}
				else {
					//printf("not a quote movie\n");
					token2 = strsep(&token, ","); //regular movie title without ""				
				}			
			
			}		
			else {
				token2 = strsep(&token, ","); 
			}
			token2 = trimWhitespace(token2);
			
			switch(col){
						case 0:
							table[row_count].color = token2;
							//printf("0 table[%i]: %s\n", row_count, table[row_count].color);
							break;
						case 1 :
							table[row_count].director_name = token2;
							//printf("1 table[%i]: %s\n", row_count, table[row_count].director_name);
							break;
						case 2 :
							table[row_count].num_critic_for_reviews = atoi(token2);
							//printf("2 table[%i]: %i\n", row_count, table[row_count].num_critic_for_reviews);
							break;
						case 3 :
							table[row_count].duration = atoll(token2);
							//printf("3 table[%i]: %i\n", row_count, table[row_count].duration);
							break;
						case 4 : 
							table[row_count].director_facebook_likes = atoi(token2);
							//printf("4 table[%i]: %i\n", row_count, table[row_count].director_facebook_likes);
							break;
						case 5 :
							table[row_count].actor_3_facebook_likes = atoi(token2);
						//	printf("5 table[%i]: %i\n", row_count, table[row_count].actor_3_facebook_likes);
							break;
						case 6 :
							table[row_count].actor_2_name = token2;
							//printf("6 table[%i]: %s\n", row_count, table[row_count].actor_2_name);
							break;
						case 7 :
							table[row_count].actor_1_facebook_likes = atoi(token2);
							//printf("7 table[%i]: %i\n", row_count, table[row_count].actor_1_facebook_likes);							
							break;
						case 8 :
							table[row_count].gross = atof(token2);
							//printf("8 table[%i]: %i\n", row_count, table[row_count].gross);
							break;
						case 9 :
							table[row_count].genres = token2;
							//printf("9 table[%i]: %s\n", row_count, table[row_count].genres);
							break;
						case 10 :
							table[row_count].actor_1_name = token2;
							//printf("10 table[%i]: %s\n", row_count, table[row_count].actor_1_name);
							break;
						case 11 :
							table[row_count].movie_title = token2;
							//printf("11 table[%i]: %s\n", row_count, table[row_count].movie_title);
							break;
						case 12 :
							table[row_count].num_voted_users = atoi(token2);
							//printf("12 table[%i]: %i\n", row_count, table[row_count].num_voted_users);
							break;
						case 13 :
							table[row_count].cast_total_facebook_likes = atoi(token2);
							///printf("13 table[%i]: %i\n", row_count, table[row_count].cast_total_facebook_likes);
							break;
						case 14 :							
							table[row_count].actor_3_name = token2;
							//printf("14 table[%i]: %s\n", row_count, table[row_count].actor_3_name);
							break;
						case 15 :
							table[row_count].facenumber_in_poster = atoi(token2);
							//printf("15 table[%i]: %i\n", row_count, table[row_count].facenumber_in_poster);
							break;
						case 16 :
							table[row_count].plot_keywords = token2;
							//printf("16 table[%i]: %s\n", row_count, table[row_count].plot_keywords);
							break;
						case 17 :
							table[row_count].movie_imdb_link = token2;
							//printf("17 table[%i]: %s\n", row_count, table[row_count].movie_imdb_link);
							break;
						case 18 :
							table[row_count].nu_user_for_reviews = atoi(token2);
							//printf("18 table[%i]: %i\n", row_count, table[row_count].nu_user_for_reviews);
							break;
						case 19 :
							table[row_count].language = token2;
							//printf("19 table[%i]: %s\n", row_count, table[row_count].language);
							break;
						case 20 :
							table[row_count].country = token2;
							//printf("20 table[%i]: %s\n", row_count, table[row_count].country);
							break;
						case 21 :
							table[row_count].content_rating = token2;
							//printf("21 table[%i]: %s\n", row_count, table[row_count].content_rating);
							break;
						case 22 :
							table[row_count].budget = atof(token2);
							//printf("22 table[%i]: %i\n", row_count, table[row_count].budget);
							break;
						case 23 :
							table[row_count].title_year = atoi(token2);
							//printf("23 table[%i]: %i\n", row_count, table[row_count].title_year);
							break;
						case 24 :
							table[row_count].actor_2_facebook_likes = atoi(token2);
							//printf("24 table[%i]: %i\n", row_count, table[row_count].actor_2_facebook_likes);
							break;
						case 25 :
							table[row_count].imdb_score = atof(token2);
							//printf("25 table[%i]: %i\n", row_count, table[row_count].imdb_score);
							break;	
						case 26 :
							table[row_count].aspect_ratio = atof(token2);
							//printf("26 table[%i]: %i\n", row_count, table[row_count].aspect_ratio);
							break;
						case 27 :
							table[row_count].movie_facebook_likes = atoi(token2);
							//printf("27 table[%i]: %i\n", row_count, table[row_count].movie_facebook_likes);
							//printf("27\n");
							break;
		
				}
			//printf("token: %s  --did it work? \n", token2);
			col++;
			//printf("\n");
		} // end of 28 struct types / end of line
		row_count++;
		
	} //end of while loop that reads rows
	
	
	divide(userInput,table, numLines);
	int aa;
		//printf("dividing\n", numLines);
	
	//printf("yao\n");
	outputDirectory(userInput, OD2, nameOfCSV, numLines);
		
	free(row);
	free(table);	
	return;
}

char * trimWhitespace(char * orig){

	char * end;
	
	while( isspace((unsigned char)*orig) ) orig++;
	
	if(*orig == 0) return orig;
	
	end = orig + strlen(orig) - 1;
	while(end > orig && isspace((unsigned char) *end)) end --;
	
	*(end +1) = 0;
	
	return orig;
}

void searchDirectory(char * colName, char * path, char * OD) //argv[2], argv[4]
{
  DIR * d = opendir(path); // open the path
  struct dirent * dir; // for the directory entries
  char *csv=".csv";
  int w = getpid();
  if(d==NULL){
	  return; // if d does not exist, return
  }

  while ((dir = readdir(d)) != NULL && y < 256){ //while directory is not empty, keep searching

  	  // if it is a directory
      if(dir -> d_type == DT_DIR && strcmp(dir->d_name,".")!=0 && strcmp(dir->d_name,"..")!=0 ){ 
      			pid1 = fork();
      			y++;
      			if(pid1 == 0){
      				if( y == 0 && (w == z)){
      					printf("PID of all child processes:\n");
      				}
      				
					//printf("DIRECTORY: %s\n", dir->d_name); // print out directory name
					char new_path[255]; //Create string for new path
					sprintf(new_path, "%s/%s", path, dir->d_name); //Create a new path. Add on the new directory to the old path
					//printf("NEW PATH: %s\n",new_path);
					searchDirectory(colName,new_path, OD); //Recursive call with the new path 
					printf("d %d ", getpid());
					break;
				}
			}
	  
      else{ // if the type is .cs
			//printf("let you down");
			if(strstr(dir->d_name, csv)!=NULL){ 
				pid1 = fork();
				y++;
				if (pid1 == 0)
				{
					if( y == 0 && (w == z)){
      					printf("PID of all child processes:\n");
      				}
					
					if(strstr(path, "sort")!=NULL){
					//printf("here");
					continue;
					}
					else{
					//printf("CSV Found: %s\n", dir->d_name);
					char csv_path[255]; //Create string for path to the csv file
					if(OD==NULL){//No output given
						OD=path;
						//printf("OD %s", OD);
					}
					sprintf(csv_path, "%s/%s", path, dir->d_name); //Create the csv path. Add on the file to the current path	
					//printf("CSV PATH: %s\n", csv_path);
					traverseFile(colName, csv_path, OD, dir->d_name); //Send the csv path to a method to traverse the file
					printf("c %d ", getpid());
					break;
					}
				}
			}
		}
		for (j= 0; j < y; j++){
			if (pid1 != 0){
				int status;
				pid1 = wait(&status);
				//wcounter += WEXITSTATUS(status);
				//printf("\n");
				//printf("Received %d\n", WEXITSTATUS(status)); 
				//break;
			}
			else {
				//printf("\n");
				break;
			}
		}

    }
    closedir(d); // close the directory
}

int searchDirectory2(char * checkDirPath, char * checkName){
  
  DIR * d = opendir(checkDirPath); // open the path
  struct dirent * dir; // for the directory entries
  char *csv=".csv";
  
  if(d==NULL){
	  return; // if d does not exist, return
  }

  while ((dir = readdir(d)) != NULL){ //while directory is not empty, keep searching
  
	if(dir -> d_type == DT_DIR && strcmp(dir->d_name,".")!=0 && strcmp(dir->d_name,"..")!=0 ){ // if it is a directory
			if((strcmp(dir->d_name, checkName)==0)){
				return 1;
			}
			char new_path2[255]; //Create string for new path
			sprintf(new_path2, "%s/%s", checkDirPath, dir->d_name); //Create a new path. Add on the new directory to the old path
			//printf("%s\n",new_path2);
			searchDirectory2(new_path2, checkName); //Recursive call with the new path 	
			
		}
    }
	return 0;
    closedir(d); // close the directory
}

int main(int argc, char *argv[]){
	//Three differnt cases for user input
	//Case 1, no directory given, search current directory
	int count = 0;
	char* columnName=argv[2];
	char *initialDirectory;
	char *outputD;
	char currentDir[256];
	getcwd(currentDir, sizeof(currentDir));
	z = getpid();
	printf("Initial PID: %d\n", getpid());
	
	char cd[256];
	char new_dir_path[256];
	getcwd(cd, sizeof(cd));
	
	DIR *d2;
	DIR * d3 = opendir(currentDir); // open the path
  	struct dirent * dir; // for the directory entries
  	char *csv=".csv";


   while ((dir = readdir(d3)) != NULL && y < 256){
	if(strstr(dir->d_name, csv)!=NULL){
	count++;

	}

   }



	if(argc==7){
		initialDirectory=argv[4];
		outputD=argv[6];
		
		if(outputD[0]=='/'){
			d2=opendir(argv[6]); //Absolute directory
			if(d2){
				close(d2);
				//printf("outcast %s\n", initialDirectory);
				searchDirectory(columnName, initialDirectory, argv[6]);
				return;
			}
			else{
				exit (0);
			}
		}
		
		int y=searchDirectory2(currentDir, argv[6]);
		
		if(y==0){ //Need to create directory, not in file system
			sprintf(new_dir_path, "%s/%s", cd, argv[6]);
			//printf("NEW DIR PATH: %s\n", new_dir_path);
			mkdir(new_dir_path, 0777);
			searchDirectory(columnName, initialDirectory, new_dir_path);
		}
		else{
			//printf("Found %i\n", y);
			if(outputD[0]=='/'){
				searchDirectory(columnName, initialDirectory, outputD);
			}
			else{
				sprintf(new_dir_path, "%s/%s", cd, argv[6]);
				searchDirectory(columnName, initialDirectory, new_dir_path);
			}
		}
	}
	if(argc==5 && (strcmp(argv[3], "-d")==0)){
		initialDirectory=argv[4];
		outputD=NULL;
		searchDirectory(columnName, initialDirectory, outputD);
	}
	if(argc==5 && (strcmp(argv[3], "-o")==0)){
		initialDirectory=currentDir;
		outputD=argv[4];
		
		if(outputD[0]=='/'){
			d2=opendir(argv[4]); //Absolute directory
			if(d2){
				close(d2);
				searchDirectory(columnName, initialDirectory, argv[4]);
				return;
			}
			else{
				exit (0);
			}
		}
		int x=searchDirectory2(currentDir, argv[4]); //arv4=outputDirectory we are searching for
		
		if(x==0){ //Need to create directory, not in file system
			sprintf(new_dir_path, "%s/%s", cd, argv[4]);
			//printf("NEW DIR PATH: %s\n", new_dir_path);
			mkdir(new_dir_path, 0777);
			searchDirectory(columnName, initialDirectory, new_dir_path);
		}
		else{
			//printf("Found %i\n", x);
			if(outputD[0]=='/'){
				//printf("LOGIC %s\n", outputD);
				searchDirectory(columnName, initialDirectory, outputD);
			}
			else{
				sprintf(new_dir_path, "%s/%s", cd, argv[4]);
				searchDirectory(columnName, initialDirectory, new_dir_path);
			}
		}
		
	}
	if(argc==3){
		initialDirectory=currentDir;
		outputD=NULL;
		searchDirectory(columnName, initialDirectory, outputD);

	}
	if (pid1 != 0)
	{
		printf("\n");
		int tot = y +count +1;
		printf("Total number of processes: %i\n", tot);
	}
	return 0;
}

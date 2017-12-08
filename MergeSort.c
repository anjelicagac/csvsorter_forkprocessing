
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Sorter.h"
int loop=0;

void ms_imdb_score(struct record *table, struct record *L, int left, struct record * R, int right){
	int a,b,c;
	a=0;
	b=0;
	c=0;
	while(a < left && b < right) {
		if((L[a].imdb_score)<(R[b].imdb_score)){ 
			table[c++] = L[a++];
		}
		else{
			table[c++] = R[b++];
		}
	}
	while(a < left){
		table[c++] = L[a++];
	}
	while(b < right){
		table[c++] = R[b++];
	}
}
void ms_aspect_ratio(struct record *table, struct record *L, int left, struct record * R, int right){
	int a,b,c;
	a=0;
	b=0;
	c=0;
	while(a < left && b < right) {
		if((L[a].aspect_ratio)<(R[b].aspect_ratio)){ 
			table[c++] = L[a++];
		}
		else{
			table[c++] = R[b++];
		}
	}
	while(a < left){
		table[c++] = L[a++];
	}
	while(b < right){
		table[c++] = R[b++];
	}
}
void ms_title_year(struct record *table, struct record *L, int left, struct record * R, int right){
	int a,b,c;
	a=0;
	b=0;
	c=0;
	while(a < left && b < right) {
		if((L[a].title_year)<(R[b].title_year)){ 
			table[c++] = L[a++];
		}
		else{
			table[c++] = R[b++];
		}
	}
	while(a < left){
		table[c++] = L[a++];
	}
	while(b < right){
		table[c++] = R[b++];
	}
}
void ms_budget(struct record *table, struct record *L, int left, struct record * R, int right){
	int a,b,c;
	a=0;
	b=0;
	c=0;
	while(a < left && b < right) {
		if((L[a].budget)<(R[b].budget)){ 
			table[c++] = L[a++];
		}
		else{
			table[c++] = R[b++];
		}
	}
	while(a < left){
		table[c++] = L[a++];
	}
	while(b < right){
		table[c++] = R[b++];
	}
}
void ms_nu_user_for_reviews(struct record *table, struct record *L, int left, struct record * R, int right){
	int a,b,c;
	a=0;
	b=0;
	c=0;
	while(a < left && b < right) {
		if((L[a].nu_user_for_reviews)<(R[b].nu_user_for_reviews)){ 
			table[c++] = L[a++];
		}
		else{
			table[c++] = R[b++];
		}
	}
	while(a < left){
		table[c++] = L[a++];
	}
	while(b < right){
		table[c++] = R[b++];
	}
}
void ms_cast_total_facebook_likes(struct record *table, struct record *L, int left, struct record * R, int right){
	int a,b,c;
	a=0;
	b=0;
	c=0;
	while(a < left && b < right) {
		if((L[a].cast_total_facebook_likes)<(R[b].cast_total_facebook_likes)){ 
			table[c++] = L[a++];
		}
		else{
			table[c++] = R[b++];
		}
	}
	while(a < left){
		table[c++] = L[a++];
	}
	while(b < right){
		table[c++] = R[b++];
	}
}
void ms_num_voted_users(struct record *table, struct record *L, int left, struct record * R, int right){
	int a,b,c;
	a=0;
	b=0;
	c=0;
	while(a < left && b < right) {
		if((L[a].num_voted_users)<(R[b].num_voted_users)){ 
			table[c++] = L[a++];
		}
		else{
			table[c++] = R[b++];
		}
	}
	while(a < left){
		table[c++] = L[a++];
	}
	while(b < right){
		table[c++] = R[b++];
	}
}
void ms_gross(struct record *table, struct record *L, int left, struct record * R, int right){
	int a,b,c;
	a=0;
	b=0;
	c=0;
	while(a < left && b < right) {
		if((L[a].gross)<(R[b].gross)){ 
			table[c++] = L[a++];
		}
		else{
			table[c++] = R[b++];
		}
	}
	while(a < left){
		table[c++] = L[a++];
	}
	while(b < right){
		table[c++] = R[b++];
	}
}
void ms_duration(struct record *table, struct record *L, int left, struct record * R, int right){
	int a,b,c;
	a=0;
	b=0;
	c=0;
	while(a < left && b < right) {
		if((L[a].duration)<(R[b].duration)){ 
			table[c++] = L[a++];
		}
		else{
			table[c++] = R[b++];
		}
	}
	while(a < left){
		table[c++] = L[a++];
	}
	while(b < right){
		table[c++] = R[b++];
	}
}
void ms_movie_facebook_likes(struct record *table, struct record *L, int left, struct record * R, int right){
	int a,b,c;
	a=0;
	b=0;
	c=0;
	while(a < left && b < right) {
		if((L[a].movie_facebook_likes)<(R[b].movie_facebook_likes)){ 
			table[c++] = L[a++];
		}
		else{
			table[c++] = R[b++];
		}
	}
	while(a < left){
		table[c++] = L[a++];
	}
	while(b < right){
		table[c++] = R[b++];
	}
}
void ms_actor_2_facebook_likes(struct record *table, struct record *L, int left, struct record * R, int right){
	int a,b,c;
	a=0;
	b=0;
	c=0;
	while(a < left && b < right) {
		if((L[a].actor_2_facebook_likes)<(R[b].actor_2_facebook_likes)){ 
			table[c++] = L[a++];
		}
		else{
			table[c++] = R[b++];
		}
	}
	while(a < left){
		table[c++] = L[a++];
	}
	while(b < right){
		table[c++] = R[b++];
	}
}
void ms_actor_1_facebook_likes(struct record *table, struct record *L, int left, struct record * R, int right){
	int a,b,c;
	a=0;
	b=0;
	c=0;
	while(a < left && b < right) {
		if((L[a].actor_1_facebook_likes)<(R[b].actor_1_facebook_likes)){ 
			table[c++] = L[a++];
		}
		else{
			table[c++] = R[b++];
		}
	}
	while(a < left){
		table[c++] = L[a++];
	}
	while(b < right){
		table[c++] = R[b++];
	}
}
void ms_actor_3_facebook_likes(struct record *table, struct record *L, int left, struct record * R, int right){
	int a,b,c;
	a=0;
	b=0;
	c=0;
	while(a < left && b < right) {
		if((L[a].actor_3_facebook_likes)<(R[b].actor_3_facebook_likes)){ 
			table[c++] = L[a++];
		}
		else{
			table[c++] = R[b++];
		}
	}
	while(a < left){
		table[c++] = L[a++];
	}
	while(b < right){
		table[c++] = R[b++];
	}
}
void ms_director_facebook_likes(struct record *table, struct record *L, int left, struct record * R, int right){
	int a,b,c;
	a=0;
	b=0;
	c=0;
	while(a < left && b < right) {
		if((L[a].director_facebook_likes)<(R[b].director_facebook_likes)){ 
			table[c++] = L[a++];
		}
		else{
			table[c++] = R[b++];
		}
	}
	while(a < left){
		table[c++] = L[a++];
	}
	while(b < right){
		table[c++] = R[b++];
	}
}
void ms_num_critic_for_reviews(struct record *table, struct record *L, int left, struct record * R, int right){
	int a,b,c;
	a=0;
	b=0;
	c=0;
	while(a < left && b < right) {
		if((L[a].num_critic_for_reviews)<(R[b].num_critic_for_reviews)){ 
			table[c++] = L[a++];
		}
		else{
			table[c++] = R[b++];
		}
	}
	while(a < left){
		table[c++] = L[a++];
	}
	while(b < right){
		table[c++] = R[b++];
	}
}
void ms_content_rating(struct record *table, struct record *L, int left, struct record * R, int right){
	int a,b,c;
	a=0;
	b=0;
	c=0;
	while(a < left && b < right) {
		if((strcmp(L[a].content_rating,R[b].content_rating))<0){ 
			table[c++] = L[a++];
		}
		else{
			table[c++] = R[b++];
		}
	}
	while(a < left){
		table[c++] = L[a++];
	}
	while(b < right){
		table[c++] = R[b++];
	}
}
void ms_country(struct record *table, struct record *L, int left, struct record * R, int right){
	int a,b,c;
	a=0;
	b=0;
	c=0;
	while(a < left && b < right) {
		if((strcmp(L[a].country,R[b].country))<0){ 
			table[c++] = L[a++];
		}
		else{
			table[c++] = R[b++];
		}
	}
	while(a < left){
		table[c++] = L[a++];
	}
	while(b < right){
		table[c++] = R[b++];
	}
}

void ms_movie_imdb_link(struct record *table, struct record *L, int left, struct record * R, int right){
	int a,b,c;
	a=0;
	b=0;
	c=0;
	while(a < left && b < right) {
		if((strcmp(L[a].movie_imdb_link,R[b].movie_imdb_link))<0){ 
			table[c++] = L[a++];
		}
		else{
			table[c++] = R[b++];
		}
	}
	while(a < left){
		table[c++] = L[a++];
	}
	while(b < right){
		table[c++] = R[b++];
	}
}
void ms_language (struct record *table, struct record *L, int left, struct record * R, int right){
	int a,b,c;
	a=0;
	b=0;
	c=0;
	while(a < left && b < right) {
		if((strcmp(L[a].language,R[b].language))<0){ 
			table[c++] = L[a++];
		}
		else{
			table[c++] = R[b++];
		}
	}
	while(a < left){
		table[c++] = L[a++];
	}
	while(b < right){
		table[c++] = R[b++];
	}
}
void ms_plot_keywords (struct record *table, struct record *L, int left, struct record * R, int right){
	int a,b,c;
	a=0;
	b=0;
	c=0;
	while(a < left && b < right) {
		if((strcmp(L[a].plot_keywords,R[b].plot_keywords))<0){ 
			table[c++] = L[a++];
		}
		else{
			table[c++] = R[b++];
		}
	}
	while(a < left){
		table[c++] = L[a++];
	}
	while(b < right){
		table[c++] = R[b++];
	}
}
void ms_movie_title (struct record *table, struct record *L, int left, struct record * R, int right){
	int a,b,c;
	a=0;
	b=0;
	c=0;
	while(a < left && b < right) {
		if((strcmp(L[a].movie_title,R[b].movie_title))<0){ 
			table[c++] = L[a++];
		}
		else{
			table[c++] = R[b++];
		}
	}
	while(a < left){
		table[c++] = L[a++];
	}
	while(b < right){
		table[c++] = R[b++];
	}
}
void ms_genres (struct record *table, struct record *L, int left, struct record * R, int right){
	int a,b,c;
	a=0;
	b=0;
	c=0;
	while(a < left && b < right) {
		if((strcmp(L[a].genres,R[b].genres))<0){ 
			table[c++] = L[a++];
		}
		else{
			table[c++] = R[b++];
		}
	}
	while(a < left){
		table[c++] = L[a++];
	}
	while(b < right){
		table[c++] = R[b++];
	}
}
void ms_actor_3_name (struct record *table, struct record *L, int left, struct record * R, int right){
	int a,b,c;
	a=0;
	b=0;
	c=0;
	while(a < left && b < right) {
		if((strcmp(L[a].actor_3_name,R[b].actor_3_name))<0){ 
			table[c++] = L[a++];
		}
		else{
			table[c++] = R[b++];
		}
	}
	while(a < left){
		table[c++] = L[a++];
	}
	while(b < right){
		table[c++] = R[b++];
	}
}
void ms_actor_1_name (struct record *table, struct record *L, int left, struct record * R, int right){
	int a,b,c;
	a=0;
	b=0;
	c=0;
	while(a < left && b < right) {
		if((strcmp(L[a].actor_1_name,R[b].actor_1_name))<0){ 
			table[c++] = L[a++];
		}
		else{
			table[c++] = R[b++];
		}
	}
	while(a < left){
		table[c++] = L[a++];
	}
	while(b < right){
		table[c++] = R[b++];
	}
}

void ms_actor_2_name (struct record *table, struct record *L, int left, struct record * R, int right){
	int a,b,c;
	a=0;
	b=0;
	c=0;
	while(a < left && b < right) {
		if((strcmp(L[a].actor_2_name,R[b].actor_2_name))<0){ 
			table[c++] = L[a++];
		}
		else{
			table[c++] = R[b++];
		}
	}
	while(a < left){
		table[c++] = L[a++];
	}
	while(b < right){
		table[c++] = R[b++];
	}
}
void msColor(struct record *table, struct record *L, int left, struct record * R, int right){
	int a,b,c;
	a=0;
	b=0;
	c=0;
	while(a < left && b < right) {
		if((strcmp(L[a].color,R[b].color))<0){ 
			table[c++] = L[a++];
		}
		else{
			table[c++] = R[b++];
		}
	}
	while(a < left){
		table[c++] = L[a++];
	}
	while(b < right){
		table[c++] = R[b++];
	}
}

void msDirectorName(struct record *table, struct record *L, int left, struct record * R, int right){
	int a,b,c;
	a=0;
	b=0;
	c=0;
	while(a < left && b < right) {
		if((strcmp(L[a].director_name,R[b].director_name))<0){ 
			table[c++] = L[a++];
		}
		else{
			table[c++] = R[b++];
		}
	}
	while(a < left){
		table[c++] = L[a++];
	}
	while(b < right){
		table[c++] = R[b++];
	}
}
	

void divide(char *userInput, struct record * table, int size){
	if(size<2){//Base Case
			return; 
	}
	loop++;

	if (strcmp(userInput, "color")==0){
		int mid, i;
		struct record *L;
		struct record *R;
		mid=size/2;
		
		L=malloc(mid*sizeof(struct record));
		R=malloc((size-mid)*sizeof(struct record));
		
		for(i = 0;i<mid;i++){
			L[i] = table[i]; // creating left subarray
		}
		for(i = mid;i<size;i++){ 
			R[i-mid] = table[i]; // creating right subarray
		}
		
		divide(userInput, L, mid);
		divide(userInput, R, size-mid);
		msColor(table, L, mid, R, size-mid);
	}
	if (strcmp(userInput, "director_name")==0){
		int mid, i;
		struct record *L;
		struct record *R;
		mid=size/2;
		
		L=malloc(mid*sizeof(struct record));
		R=malloc((size-mid)*sizeof(struct record));
		
		for(i = 0;i<mid;i++){
			L[i] = table[i]; // creating left subarray
		}
		for(i = mid;i<size;i++){ 
			R[i-mid] = table[i]; // creating right subarray
		}
		
		divide(userInput, L, mid);
		divide(userInput, R, size-mid);
		msDirectorName(table, L, mid, R, size-mid);
	}
	if (strcmp(userInput, "actor_1_name")==0){
		int mid, i;
		struct record *L;
		struct record *R;
		mid=size/2;
		
		L=malloc(mid*sizeof(struct record));
		R=malloc((size-mid)*sizeof(struct record));
		
		for(i = 0;i<mid;i++){
			L[i] = table[i]; // creating left subarray
		}
		for(i = mid;i<size;i++){ 
			R[i-mid] = table[i]; // creating right subarray
		}
		
		divide(userInput, L, mid);
		divide(userInput, R, size-mid);
		ms_actor_1_name(table, L, mid, R, size-mid);
		
	}
	if (strcmp(userInput, "actor_2_name")==0){
		int mid, i;
		struct record *L;
		struct record *R;
		mid=size/2;
		
		L=malloc(mid*sizeof(struct record));
		R=malloc((size-mid)*sizeof(struct record));
		
		for(i = 0;i<mid;i++){
			L[i] = table[i]; // creating left subarray
		}
		for(i = mid;i<size;i++){ 
			R[i-mid] = table[i]; // creating right subarray
		}
		
		divide(userInput, L, mid);
		divide(userInput, R, size-mid);
		ms_actor_2_name(table, L, mid, R, size-mid);
	}
	if (strcmp(userInput, "actor_3_name")==0){
		int mid, i;
		struct record *L;
		struct record *R;
		mid=size/2;
		
		L=malloc(mid*sizeof(struct record));
		R=malloc((size-mid)*sizeof(struct record));
		
		for(i = 0;i<mid;i++){
			L[i] = table[i]; // creating left subarray
		}
		for(i = mid;i<size;i++){ 
			R[i-mid] = table[i]; // creating right subarray
		}
		
		divide(userInput, L, mid);
		divide(userInput, R, size-mid);
		ms_actor_3_name(table, L, mid, R, size-mid);
	}
	if (strcmp(userInput, "genres")==0){
		int mid, i;
		struct record *L;
		struct record *R;
		mid=size/2;
		
		L=malloc(mid*sizeof(struct record));
		R=malloc((size-mid)*sizeof(struct record));
		
		for(i = 0;i<mid;i++){
			L[i] = table[i]; // creating left subarray
		}
		for(i = mid;i<size;i++){ 
			R[i-mid] = table[i]; // creating right subarray
		}
		
		divide(userInput, L, mid);
		divide(userInput, R, size-mid);
		ms_genres(table, L, mid, R, size-mid);

	}
	if (strcmp(userInput, "movie_title")==0){
		int mid, i;
		struct record *L;
		struct record *R;
		mid=size/2;
		
		L=malloc(mid*sizeof(struct record));
		R=malloc((size-mid)*sizeof(struct record));
		
		for(i = 0;i<mid;i++){
			L[i] = table[i]; // creating left subarray
		}
		for(i = mid;i<size;i++){ 
			R[i-mid] = table[i]; // creating right subarray
		}
		
		divide(userInput, L, mid);
		divide(userInput, R, size-mid);
		ms_movie_title(table, L, mid, R, size-mid);
	}
	if (strcmp(userInput, "plot_keywords")==0){
		int mid, i;
		struct record *L;
		struct record *R;
		mid=size/2;
		
		L=malloc(mid*sizeof(struct record));
		R=malloc((size-mid)*sizeof(struct record));
		
		for(i = 0;i<mid;i++){
			L[i] = table[i]; // creating left subarray
		}
		for(i = mid;i<size;i++){ 
			R[i-mid] = table[i]; // creating right subarray
		}
		
		divide(userInput, L, mid);
		divide(userInput, R, size-mid);
		ms_plot_keywords(table, L, mid, R, size-mid);
	}
	if (strcmp(userInput, "language")==0){
		int mid, i;
		struct record *L;
		struct record *R;
		mid=size/2;
		
		L=malloc(mid*sizeof(struct record));
		R=malloc((size-mid)*sizeof(struct record));
		
		for(i = 0;i<mid;i++){
			L[i] = table[i]; // creating left subarray
		}
		for(i = mid;i<size;i++){ 
			R[i-mid] = table[i]; // creating right subarray
		}
		
		divide(userInput, L, mid);
		divide(userInput, R, size-mid);
		ms_language(table, L, mid, R, size-mid);
	}
	if (strcmp(userInput, "movie_imdb_link")==0){
		int mid, i;
		struct record *L;
		struct record *R;
		mid=size/2;
		
		L=malloc(mid*sizeof(struct record));
		R=malloc((size-mid)*sizeof(struct record));
		
		for(i = 0;i<mid;i++){
			L[i] = table[i]; // creating left subarray
		}
		for(i = mid;i<size;i++){ 
			R[i-mid] = table[i]; // creating right subarray
		}
		
		divide(userInput, L, mid);
		divide(userInput, R, size-mid);
		ms_movie_imdb_link(table, L, mid, R, size-mid);

	}
	if (strcmp(userInput, "country")==0){
		int mid, i;
		struct record *L;
		struct record *R;
		mid=size/2;
		
		L=malloc(mid*sizeof(struct record));
		R=malloc((size-mid)*sizeof(struct record));
		
		for(i = 0;i<mid;i++){
			L[i] = table[i]; // creating left subarray
		}
		for(i = mid;i<size;i++){ 
			R[i-mid] = table[i]; // creating right subarray
		}
		
		divide(userInput, L, mid);
		divide(userInput, R, size-mid);
		ms_country(table, L, mid, R, size-mid);

	}
	if (strcmp(userInput, "content_rating")==0){
		int mid, i;
		struct record *L;
		struct record *R;
		mid=size/2;
		
		L=malloc(mid*sizeof(struct record));
		R=malloc((size-mid)*sizeof(struct record));
		
		for(i = 0;i<mid;i++){
			L[i] = table[i]; // creating left subarray
		}
		for(i = mid;i<size;i++){ 
			R[i-mid] = table[i]; // creating right subarray
		}
		
		divide(userInput, L, mid);
		divide(userInput, R, size-mid);
		ms_content_rating(table, L, mid, R, size-mid);
	}
	if (strcmp(userInput, "num_critic_for_reviews")==0){
		int mid, i;
		struct record *L;
		struct record *R;
		mid=size/2;
		
		L=malloc(mid*sizeof(struct record));
		R=malloc((size-mid)*sizeof(struct record));
		
		for(i = 0;i<mid;i++){
			L[i] = table[i]; // creating left subarray
		}
		for(i = mid;i<size;i++){ 
			R[i-mid] = table[i]; // creating right subarray
		}
		
		divide(userInput, L, mid);
		divide(userInput, R, size-mid);
		ms_num_critic_for_reviews(table, L, mid, R, size-mid);

	}
	if (strcmp(userInput, "director_facebook_likes")==0){
		int mid, i;
		struct record *L;
		struct record *R;
		mid=size/2;
		
		L=malloc(mid*sizeof(struct record));
		R=malloc((size-mid)*sizeof(struct record));
		
		for(i = 0;i<mid;i++){
			L[i] = table[i]; // creating left subarray
		}
		for(i = mid;i<size;i++){ 
			R[i-mid] = table[i]; // creating right subarray
		}
		
		divide(userInput, L, mid);
		divide(userInput, R, size-mid);
		ms_director_facebook_likes(table, L, mid, R, size-mid);
		
	}
	if (strcmp(userInput, "actor_3_facebook_likes")==0){
		int mid, i;
		struct record *L;
		struct record *R;
		mid=size/2;
		
		L=malloc(mid*sizeof(struct record));
		R=malloc((size-mid)*sizeof(struct record));
		
		for(i = 0;i<mid;i++){
			L[i] = table[i]; // creating left subarray
		}
		for(i = mid;i<size;i++){ 
			R[i-mid] = table[i]; // creating right subarray
		}
		
		divide(userInput, L, mid);
		divide(userInput, R, size-mid);
		ms_actor_3_facebook_likes(table, L, mid, R, size-mid);

	}
	if (strcmp(userInput, "actor_1_facebook_likes")==0){
		int mid, i;
		struct record *L;
		struct record *R;
		mid=size/2;
		
		L=malloc(mid*sizeof(struct record));
		R=malloc((size-mid)*sizeof(struct record));
		
		for(i = 0;i<mid;i++){
			L[i] = table[i]; // creating left subarray
		}
		for(i = mid;i<size;i++){ 
			R[i-mid] = table[i]; // creating right subarray
		}
		
		divide(userInput, L, mid);
		divide(userInput, R, size-mid);
		ms_actor_1_facebook_likes(table, L, mid, R, size-mid);
		
	}
	if (strcmp(userInput, "actor_2_facebook_likes")==0){
		int mid, i;
		struct record *L;
		struct record *R;
		mid=size/2;
		
		L=malloc(mid*sizeof(struct record));
		R=malloc((size-mid)*sizeof(struct record));
		
		for(i = 0;i<mid;i++){
			L[i] = table[i]; // creating left subarray
		}
		for(i = mid;i<size;i++){ 
			R[i-mid] = table[i]; // creating right subarray
		}
		
		divide(userInput, L, mid);
		divide(userInput, R, size-mid);
		ms_actor_2_facebook_likes(table, L, mid, R, size-mid);
		
	}
	if (strcmp(userInput, "movie_facebook_likes")==0){
		int mid, i;
		struct record *L;
		struct record *R;
		mid=size/2;
		
		L=malloc(mid*sizeof(struct record));
		R=malloc((size-mid)*sizeof(struct record));
		
		for(i = 0;i<mid;i++){
			L[i] = table[i]; // creating left subarray
		}
		for(i = mid;i<size;i++){ 
			R[i-mid] = table[i]; // creating right subarray
		}
		
		divide(userInput, L, mid);
		divide(userInput, R, size-mid);
		ms_movie_facebook_likes(table, L, mid, R, size-mid);
		
	}
	if (strcmp(userInput, "duration")==0){
		int mid, i;
		struct record *L;
		struct record *R;
		mid=size/2;
		
		L=malloc(mid*sizeof(struct record));
		R=malloc((size-mid)*sizeof(struct record));
		
		for(i = 0;i<mid;i++){
			L[i] = table[i]; // creating left subarray
		}
		for(i = mid;i<size;i++){ 
			R[i-mid] = table[i]; // creating right subarray
		}
		
		divide(userInput, L, mid);
		divide(userInput, R, size-mid);
		ms_duration(table, L, mid, R, size-mid);
		
	}
	if (strcmp(userInput, "gross")==0){
		int mid, i;
		struct record *L;
		struct record *R;
		mid=size/2;
		
		L=malloc(mid*sizeof(struct record));
		R=malloc((size-mid)*sizeof(struct record));
		
		for(i = 0;i<mid;i++){
			L[i] = table[i]; // creating left subarray
		}
		for(i = mid;i<size;i++){ 
			R[i-mid] = table[i]; // creating right subarray
		}
		
		divide(userInput, L, mid);
		divide(userInput, R, size-mid);
		ms_gross(table, L, mid, R, size-mid);
	}
	if (strcmp(userInput, "num_voted_users")==0){
		int mid, i;
		struct record *L;
		struct record *R;
		mid=size/2;
		
		L=malloc(mid*sizeof(struct record));
		R=malloc((size-mid)*sizeof(struct record));
		
		for(i = 0;i<mid;i++){
			L[i] = table[i]; // creating left subarray
		}
		for(i = mid;i<size;i++){ 
			R[i-mid] = table[i]; // creating right subarray
		}
		
		divide(userInput, L, mid);
		divide(userInput, R, size-mid);
		ms_num_voted_users(table, L, mid, R, size-mid);
	}
	if (strcmp(userInput, "cast_total_facebook_likes")==0){
		int mid, i;
		struct record *L;
		struct record *R;
		mid=size/2;
		
		L=malloc(mid*sizeof(struct record));
		R=malloc((size-mid)*sizeof(struct record));
		
		for(i = 0;i<mid;i++){
			L[i] = table[i]; // creating left subarray
		}
		for(i = mid;i<size;i++){ 
			R[i-mid] = table[i]; // creating right subarray
		}
		
		divide(userInput, L, mid);
		divide(userInput, R, size-mid);
		ms_cast_total_facebook_likes(table, L, mid, R, size-mid);
		
	}
	if (strcmp(userInput, "num_user_for_reviews")==0){
		int mid, i;
		struct record *L;
		struct record *R;
		mid=size/2;
		
		L=malloc(mid*sizeof(struct record));
		R=malloc((size-mid)*sizeof(struct record));
		
		for(i = 0;i<mid;i++){
			L[i] = table[i]; // creating left subarray
		}
		for(i = mid;i<size;i++){ 
			R[i-mid] = table[i]; // creating right subarray
		}
		
		divide(userInput, L, mid);
		divide(userInput, R, size-mid);
		ms_nu_user_for_reviews(table, L, mid, R, size-mid);

	}
	if (strcmp(userInput, "budget")==0){
		int mid, i;
		struct record *L;
		struct record *R;
		mid=size/2;
		
		L=malloc(mid*sizeof(struct record));
		R=malloc((size-mid)*sizeof(struct record));
		
		for(i = 0;i<mid;i++){
			L[i] = table[i]; // creating left subarray
		}
		for(i = mid;i<size;i++){ 
			R[i-mid] = table[i]; // creating right subarray
		}
		
		divide(userInput, L, mid);
		divide(userInput, R, size-mid);
		ms_budget(table, L, mid, R, size-mid);
		
	}
	if (strcmp(userInput, "title_year")==0){
		int mid, i;
		struct record *L;
		struct record *R;
		mid=size/2;
		
		L=malloc(mid*sizeof(struct record));
		R=malloc((size-mid)*sizeof(struct record));
		
		for(i = 0;i<mid;i++){
			L[i] = table[i]; // creating left subarray
		}
		for(i = mid;i<size;i++){ 
			R[i-mid] = table[i]; // creating right subarray
		}
		
		divide(userInput, L, mid);
		divide(userInput, R, size-mid);
		ms_title_year(table, L, mid, R, size-mid);
		
	}
	if (strcmp(userInput, "imdb_score")==0){
		int mid, i;
		struct record *L;
		struct record *R;
		mid=size/2;
		
		L=malloc(mid*sizeof(struct record));
		R=malloc((size-mid)*sizeof(struct record));
		
		for(i = 0;i<mid;i++){
			L[i] = table[i]; // creating left subarray
		}
		for(i = mid;i<size;i++){ 
			R[i-mid] = table[i]; // creating right subarray
		}
		
		divide(userInput, L, mid);
		divide(userInput, R, size-mid);
		ms_imdb_score(table, L, mid, R, size-mid);

	}
	if (strcmp(userInput, "aspect_ratio")==0){
		int mid, i;
		struct record *L;
		struct record *R;
		mid=size/2;
		
		L=malloc(mid*sizeof(struct record));
		R=malloc((size-mid)*sizeof(struct record));
		
		for(i = 0;i<mid;i++){
			L[i] = table[i]; // creating left subarray
		}
		for(i = mid;i<size;i++){ 
			R[i-mid] = table[i]; // creating right subarray
		}
		
		divide(userInput, L, mid);
		divide(userInput, R, size-mid);
		ms_aspect_ratio(table, L, mid, R, size-mid);
	}
	//Need 28 total if statements, one for each column name
	else{
		if(loop==1){
			printf("That is not a category name!");
		}
		return;
	}
}



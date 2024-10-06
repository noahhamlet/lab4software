int main(){
    int score;
    int touchdown_con
    int touchdown_goal
    int safety
    int touchdown
    int field_goal
    while (score != 0, 1){
        printf('\n');
        printf("Enter a score, 0 or 1 to exit");
        scanf('%d',&score);
        touchdown_con = 0
        touchdown_goal = 0
        safety = 0
        touchdown = 0 
        field_goal = 0
        while (touchdown_con + touchdown_goal + safety + touchdown + field_goal < score){
            safety=safety + 1
            if(touchdown_con + touchdown_goal + safety + touchdown + field_goal == score){
                printf('\n');
                printf ("%d TD + 2, %d TD+1, %d TD, %d FG, %d safety", touchdown_con, touchdown_goal, touchdown, field_goal, safety);
            }
            else if (touchdown_con + touchdown_goal + safety + touchdown + field_goal > score){
                if (field_goal < touchdown){
                    field_goal = field_goal + 1;
                }
                else if (touchdown < touchdown_goal){
                    touchdown= touchdown + 1;
                }
                else if (touchdown_goal<touchdown_con){
                    touchdown_goal= touchdown_goal + 1;
                }
                else{
                    touchdown_con=touchdown_con + 1;
                }
                safety=0
                if (touchdown_con + touchdown_goal + safety + touchdown + field_goal == score){
                    printf('\n');
                    printf ("%d TD + 2, %d TD+1, %d TD, %d FG, %d safety", touchdown_con, touchdown_goal, touchdown, field_goal, safety);
                }
            }
        }
    }
}
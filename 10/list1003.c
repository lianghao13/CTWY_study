/*
 *通过指针间接地操作身高
*/

#include <stdio.h>

int main(void) {
    int     sato    = 178;       /*佐藤的身高 */
    int     sanaka  = 175;       /*佐中的身高 */
    int     hiraki  = 165;       /*平木的身高 */
    int     masaki  = 179;       /*真崎的身高 */

    int     *isako, *hiroko;

    isako   = &sato;             /*isako指向sato（喜欢佐藤） */
    hiroko  = &masaki;           /*hiroko指向masaki（喜欢真崎） */

    printf("伊莎子喜欢的人的身高：%d\n", *isako);
    printf("洋子喜欢的人的身高：%d\n", *hiroko);

    isako = &sanaka;             /*isako指向sanaka（移情别恋） */

    *hiroko = 180;               /*将hiroko指向 */ 
}

/*
 *ͨ��ָ���ӵز������
*/

#include <stdio.h>

int main(void) {
    int     sato    = 178;       /*���ٵ���� */
    int     sanaka  = 175;       /*���е���� */
    int     hiraki  = 165;       /*ƽľ����� */
    int     masaki  = 179;       /*�������� */

    int     *isako, *hiroko;

    isako   = &sato;             /*isakoָ��sato��ϲ�����٣� */
    hiroko  = &masaki;           /*hirokoָ��masaki��ϲ�����飩 */

    printf("��ɯ��ϲ�����˵���ߣ�%d\n", *isako);
    printf("����ϲ�����˵���ߣ�%d\n", *hiroko);

    isako = &sanaka;             /*isakoָ��sanaka����������� */

    *hiroko = 180;               /*��hirokoָ��Ķ���Ϊ180�����޸�����ϲ�����˵���� */ 

    putchar('\n');
    printf("���ٵ���ߣ�%d\n", sato);
    printf("���е���ߣ�%d\n", sanaka);
    printf("ƽľ����ߣ�%d\n", hiraki);
    printf("��������ߣ�%d\n", masaki);
    printf("��ɯ��ϲ�����˵���ߣ�%d\n", *isako);
    printf("����ϲ�����˵���ߣ�%d\n", *hiroko);

    return(0);
}

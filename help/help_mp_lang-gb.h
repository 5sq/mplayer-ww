static char gb_help_text[]=
"�÷�:   mplayer [ѡ��] [URL|·��/]�ļ���\n"
"\n"
"����ѡ��: (�����б�μ��ֲ�ҳ)\n"
" -vo <drv>        ѡ����Ƶ������� (�鿴�����б��á�-vo help��)\n"
" -ao <drv>        ѡ����Ƶ������� (�鿴�����б��á�-ao help��)\n"
#ifdef CONFIG_VCD
" vcd://<trackno>  ���� (S)VCD �켣�� (ԭʼ�豸, ���谲��)\n"
#endif
#ifdef CONFIG_DVDREAD
" dvd://<titleno>  ���豸��������ͨ�ļ��ϲ��� DVD �����\n"
" -alang/-slang    ѡ�� DVD ����/��Ļ������(ʹ�����ַ��Ĺ��Ҵ���)\n"
#endif
" -ss <position>   Ѱ�ҵ�����(�������ʱ���� hh:mm:ss ��)λ��\n"
" -nosound         ����������\n"
" -fs              ȫ������ (������ -vm, -zoom, ������ֲ�ҳ)\n"
" -x <x> -y <y>    ������ʾ�ķֱ���(�ṩ�� -vm ���� -zoom ʹ��)\n"
" -sub <file>      ָ����Ļ�ļ� (�μ� -subfps, -subdelay)\n"
" -playlist <file> ָ�������б��ļ�\n"
" -vid x -aid y    ѡ�����ڲ��ŵ� x ��Ƶ���� y ��Ƶ��ͨ����\n"
" -fps x -srate y  �ı���Ƶ��Ϊ x ֡��(fps)����Ƶ��Ϊ y ����(Hz)\n"
" -pp <quality>    ʹ�ú��ڴ��������/�˾� (������ֲ�ҳ)\n"
" -framedrop       ʹ�ö�֡(����������)\n"
"\n"
"�������Ƽ�: (�������б�μ����ֲ�ҳ, ͬʱҲ��˲� input.conf)\n"
" <-  or  ->       ����/��� 10 ��\n"
" down or up       ����/��� 1 ����\n"
" pgdown or pgup   ����/��� 10 ����\n"
" < or >           ���������б��е�ǰһ��/��һ��\n"
" p or SPACE       ��ͣ����(�����������)\n"
" q or ESC         ֹͣ���Ų��˳�����\n"
" + or -           ������Ƶ�ӳ�����/���� 0.1 ��\n"
" o                ѭ�� OSD ģʽ:  ��/������/�������Ӽ�ʱ��\n"
" * or /           ���ӻ���� PCM ����\n"
" x or z           ������Ļ�ӳ�����/���� 0.1 ��\n"
" r or t           ��/�µ�����Ļλ��, �μ���-vf expand��\n"
"\n"
" * * *  ��ϸ���ݣ������(�߼�)ѡ��Ϳ��Ƽ�����μ��ֲ�ҳ  * * *\n"
"\n";

static char gbk_help_text[]=
"�÷�:   mplayer [�x�] [URL|·��/]�ļ���\n"
"\n"
"�����x�: (�����б텢Ҋ�փ��)\n"
" -vo <drv>        �x��ҕ�lݔ���� (�鿴���б��á�-vo help��)\n"
" -ao <drv>        �x�����lݔ���� (�鿴���б��á�-ao help��)\n"
#ifdef HAVE_VCD
" vcd://<trackno>  ���� (S)VCD ܉�E̖ (ԭʼ�O��, �o�谲��)\n"
#endif
#ifdef CONFIG_DVDREAD
" dvd://<titleno>  ���O���������ͨ�ļ��ϲ��� DVD ���}̖\n"
" -alang/-slang    �x�� DVD ��܉/��Ļ���Z��(ʹ�Ã��ַ��ć��Ҵ�̖)\n"
#endif
" -ss <position>   ���ҵ��o��(�������r���� hh:mm:ss ��)λ��\n"
" -nosound         ��������\n"
" -fs              ȫ������ (������ -vm, -zoom, ԔҊ���փ��)\n"
" -x <x> -y <y>    �O���@ʾ�ķֱ���(�ṩ�o -vm ���� -zoom ʹ��)\n"
" -sub <file>      ָ����Ļ�ļ� (��Ҋ -subfps, -subdelay)\n"
" -playlist <file> ָ�������б��ļ�\n"
" -vid x -aid y    �x�����ڲ��ŵ� x ҕ�l���� y ���l��ͨ��̖\n"
" -fps x -srate y  ��׃ҕ�l�ʞ� x ����(fps)�����l�ʞ� y ��Ɲ(Hz)\n"
" -pp <quality>    ʹ������̎���^�V��/�V�R (ԔҊ���փ��)\n"
" -framedrop       ʹ�ÁG��(�������C��)\n"
"\n"
"�������u�I: (�������б텢Ҋ���փ��, ͬ�rҲՈ�˲� input.conf)\n"
" <-  or  ->       ����/���M 10 ��\n"
" down or up       ����/���M 1 ���\n"
" pgdown or pgup   ����/���M 10 ���\n"
" < or >           ���������б��е�ǰһ��/��һ��\n"
" p or SPACE       ��ͣ����(�������I�^�m)\n"
" q or ESC         ֹͣ���Ų��˳�����\n"
" + or -           �{�����l���t����/�p�� 0.1 ��\n"
" o                ѭ�h OSD ģʽ:  �o/�����l/�����l��Ӌ�r��\n"
" * or /           ���ӻ�p�� PCM ����\n"
" x or z           �{����Ļ���t����/�p�� 0.1 ��\n"
" r or t           ��/���{����Ļλ��, ��Ҋ��-vf expand��\n"
"\n"
" * * *  Ԕ�����ݣ������(�߼�)�x헺Ϳ��u�I��Ո��Ҋ�փ��  * * *\n"
"\n";

#define GB_INFOTR_MEDIAINFO "ý����Ϣ"
#define GB_INFOTR_NORMAL "����"
#define GB_INFOTR_VIDEO "��Ƶ"
#define GB_INFOTR_AUDIO "��Ƶ"
#define GB_INFOTR_NAME "�ļ�"
#define GB_INFOTR_DEMUXER "����"
#define GB_INFOTR_SIZE "��С"
#define GB_INFOTR_LENG "ʱ��"
#define GB_INFOTR_FORMAT "��ʽ"
#define GB_INFOTR_CODEC "������"
#define GB_INFOTR_BITRATE "������"
#define GB_INFOTR_CLIPINFO "������Ϣ"
#define GB_INFOTR_VIDEO_RESOLUTION "�ֱ���"
#define GB_INFOTR_VIDEO_ASPECT "��߱�"
#define GB_INFOTR_VIDEO_FPS "֡����"
#define GB_INFOTR_AUDIO_RATE "������"
#define GB_INFOTR_AUDIO_NCH "������"
#define GB_INFOTR_SUB "��Ļ"
#define GB_INFOTR_UNKNOWN "δ֪"
#define GB_INFOTR_TRACK "���"
#define GB_INFOTR_NAME "����"
#define GB_INFOTR_AUTHOR "����"
#define GB_INFOTR_COPYRIGHT "��Ȩ"
#define GB_INFOTR_COMMENTS "ע��"
#define GB_INFOTR_TITLE "����"
#define GB_INFOTR_YEAR "���"
#define GB_INFOTR_ALBUM "ר��"

#define GBK_INFOTR_MEDIAINFO "ý�w��Ϣ"
#define GBK_INFOTR_NORMAL "�C��"
#define GBK_INFOTR_VIDEO "ҕ�l"
#define GBK_INFOTR_AUDIO "���l"
#define GBK_INFOTR_NAME "�n��"
#define GBK_INFOTR_DEMUXER "����"
#define GBK_INFOTR_SIZE "��С"
#define GBK_INFOTR_LENG "�r�L"
#define GBK_INFOTR_FORMAT "��ʽ"
#define GBK_INFOTR_CODEC "��a��"
#define GBK_INFOTR_BITRATE "λԪ��"
#define GBK_INFOTR_CLIPINFO "�ز��YӍ"
#define GBK_INFOTR_VIDEO_RESOLUTION "������"
#define GBK_INFOTR_VIDEO_ASPECT "���߱�"
#define GBK_INFOTR_VIDEO_FPS "������"
#define GBK_INFOTR_AUDIO_RATE "�ɘ���"
#define GBK_INFOTR_AUDIO_NCH "����"
#define GBK_INFOTR_SUB "��Ļ"
#define GBK_INFOTR_UNKNOWN "δ֪"
#define GBK_INFOTR_TRACK "܉�E"
#define GBK_INFOTR_NAME "���Q"
#define GBK_INFOTR_AUTHOR "����"
#define GBK_INFOTR_COPYRIGHT "���"
#define GBK_INFOTR_COMMENTS "ע�"
#define GBK_INFOTR_TITLE "���}"
#define GBK_INFOTR_YEAR "���"
#define GBK_INFOTR_ALBUM "��݋"

// ========================= MPlayer messages ===========================

// mplayer.c:
//#define GB_MSGTR_Exiting "\n�����˳�..\n"
//#define GB_MSGTR_ExitingHow "\n�����˳�...��%s��\n"
//#define GB_MSGTR_BuiltinCodecsConf "ʹ���ڽ�Ĭ�ϵ� codecs.conf �ļ���\n"
//#define GB_MSGTR_CantLoadSub "���ܼ�����Ļ��%s\n"
//#define GB_MSGTR_FPSnotspecified "FPS ���ļ�ͷ��û��ָ��������Ч����ʹ�� -fps ѡ�\n"
//#define GB_MSGTR_StartPlaying "��ʼ����...\n"

//#define GB_MSGTR_SystemTooSlow "\n\n"\
//"         ************************************************\n"\
//"         ****     ���ϵͳ����̫�����������Ų���!    ****\n"\
//"         ************************************************\n"\
//" ���ܵ�ԭ������ͱ�ͨ�İ취��\n"\
//"- �����ԭ���𻵵Ļ���©���� _audio_ ����\n"\
//"  - ���� -ao sdl ��ʹ�� ALSA  �� OSS ģ�ⷽʽ��\n"\
//"  - ����ʹ�ò�ͬ�� -autosync ��ֵ�������� 30 ��ʼ��\n"\
//"- ��Ƶ���������\n"\
//"  - ���� -vo �ò�ͬ���������μ� -vo help �Ի�ȡ�����б��������� -framedrop��\n"\
//"- CPU ������\n"\
//"  - ��Ҫ��ͼ���������� CPU �ϲ��Ŵ������� DVD/DivX������ lavdopts �е�һЩѡ�\n"\
//"    ���磺-vfm ffmpeg -lavdopts lowres=1:fast:skiploopfilter=all��\n"\
//"- �ļ���\n"\
//"  - �������ʹ�� -nobps -ni -forceidx -mc 0 ��Щѡ�\n"\
//"- ý���ȡ����NFS/SMB ���ء�DVD��VCD ���豸��\n"\
//"  - ���� -cache 8192 ѡ�\n"\
//"- ���Ƿ����� -cache ѡ���һ���ǽ���ϲ��� AVI �ļ���\n"\
//"  - ���� -nocache ѡ�\n"\
//"�Ķ� DOCS/zh/video.html �� DOCS/zh/sound.html��Ѱ�ҵ���/���ٵļ��ɡ�\n"\
//"�����Щһ�����ﲻ���㣬���Ķ� DOCS/zh/bugreports.html��\n\n"

//#define GB_MSGTR_Playing "\n���ڲ��� %s��\n"
//#define GB_MSGTR_NoSound "��Ƶ��û������\n"
//#define GB_MSGTR_FPSforced "FPS ǿ����Ϊ %5.3f��ftime��%5.3f����\n"
//#define GB_MSGTR_CompiledWithRuntimeDetection "����ʱ������ʵʱ CPU ���ͼ�⡣\n"
//#define GB_MSGTR_CannotReadVideoProperties "��Ƶ���޷���ȡ��Ƶ����\n"
//#define GB_MSGTR_NoStreamFound "δ�ҵ�ý������\n"
//#define GB_MSGTR_ErrorInitializingVODevice "��/��ʼ����ѡ�ģ�-vo����Ƶ����豸����\n"
//#define GB_MSGTR_Video_NoVideo "��Ƶ��û����Ƶ��\n"
//#define GB_MSGTR_LoadingConfig "���ڼ������� '%s'\n"
//#define GB_MSGTR_LoadingProtocolProfile "����Э����ص����ü���%s��\n"
//#define GB_MSGTR_LoadingExtensionProfile "������չ�����ص����ü���%s��\n"
//#define GB_MSGTR_AddedSubtitleFile "��Ļ�������Ļ�ļ���%d����%s\n"


// ========================= MPlayer messages ===========================

// mplayer.c:

//#define GBK_MSGTR_Exiting "\n�����˳�..\n"
//#define GBK_MSGTR_ExitingHow "\n�����˳�... (%s)\n"
//#define GBK_MSGTR_BuiltinCodecsConf "ʹ�ÃȽ�Ĭ�J�� codecs.conf �ļ���\n"
//#define GBK_MSGTR_CantLoadSub "���ܼ��d��Ļ: %s\n"
//#define GBK_MSGTR_FPSnotspecified "FPS ���ļ��^�Л]��ָ�����ߟoЧ���� -fps �x헡�\n"
//#define GBK_MSGTR_StartPlaying "�_ʼ����...\n"

//#define GBK_MSGTR_SystemTooSlow "\n\n"\
//"         ************************************************\n"\
//"         ****      ��ĂS�y̫��������, ���Ų���!     ****\n"\
//"         ************************************************\n"\
//" ���ܵ�ԭ��, ���}, �ͽ�Q�k����\n"\
//"- �Ҋ��ԭ�򣺓p�ĵĻ����e�`�� _���l_ ��\n"\
//"  - ԇԇ -ao sdl ��ʹ�� ALSA  �� OSS ģ�M��\n"\
//"  - ԇ򞲻ͬ�� -autosync ��ֵ�������� 30 �_ʼ��\n"\
//"- ҕ�lݔ��̫��\n"\
//"  - (���� -vo help)ԇԇ -vo �ò�ͬ���ӻ���ԇԇ -framedrop��\n"\
//"- CPU ̫��\n"\
//"  - ��Ҫԇ�D������ CPU �ϲ��Ŵ�� DVD/DivX! ԇԇһЩ lavdopts �x�,\n"\
//"    ����: -vfm ffmpeg -lavdopts lowres=1:fast:skiploopfilter=all��\n"\
//"- �p�ĵ��ļ�\n"\
//"  - ԇԇ�����x헵ĸ��N�M��: -nobps -ni -forceidx -mc 0��\n"\
//"- ̫����ý�w(�� NFS/SMB �����c, DVD, VCD ��)\n"\
//"  - ԇԇ -cache 8192��\n"\
//"- ������ -cache �x헲���һ���ǽ��e�� AVI �ļ���\n"\
//"  - ԇԇ -nocache��\n"\
//"��x DOCS/zh/video.html �� DOCS/zh/sound.html �팤���{��/���ٵļ��ɡ�\n"\
//"����@Щһ�����ò���, ��x DOCS/zh/bugreports.html��\n\n"

//#define GBK_MSGTR_Playing "\n���ڲ��� %s��\n"
//#define GBK_MSGTR_NoSound "���l: �]��\n"
//#define GBK_MSGTR_FPSforced "FPS �i���� %5.3f  (ftime: %5.3f)��\n"
//#define GBK_MSGTR_CompiledWithRuntimeDetection "���g�r���ˌ��r CPU �z�y��\n"
//#define GBK_MSGTR_CannotReadVideoProperties "ҕ�l: �o���xȡ����\n"
//#define GBK_MSGTR_NoStreamFound "�Ҳ�����ý�w��\n"
//#define GBK_MSGTR_ErrorInitializingVODevice "���_/��ʼ�� (-vo) ���x��ҕ�lݔ���O����e��\n"
//#define GBK_MSGTR_Video_NoVideo "ҕ�l: �]ҕ�l\n"
//#define GBK_MSGTR_LoadingConfig "�����b�d�����ļ� '%s'\n"
//#define GBK_MSGTR_LoadingProtocolProfile "���d�f�h���P�����ü���%s��\n"
//#define GBK_MSGTR_LoadingExtensionProfile "���d�Uչ�M�����P�����ü���%s��\n"
//#define GBK_MSGTR_AddedSubtitleFile "��Ļ: �����Ļ�ļ� (%d): %s\n"


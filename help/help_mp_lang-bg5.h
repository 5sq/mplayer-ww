static char big5_help_text[]=
"�Ϊk:   mplayer [�ﶵ] [URL|���|/]���W\n"
"\n"
"�򥻿ﶵ: (����C��Ѩ���U��)\n"
" -vo <drv>        ��ܵ��W��X�X�� (�d���X�ʦC��Ρ�-vo help��)\n"
" -ao <drv>        ��ܭ��W��X�X�� (�d���X�ʦC��Ρ�-ao help��)\n"
#ifdef CONFIG_VCD
" vcd://<trackno>  ���� (S)VCD �y�� (��l�]��, �L�ݦw�E)\n"
#endif
#ifdef CONFIG_DVDREAD
" dvd://<titleno>  �q�]�ƦӤ��O���q���W���� DVD ���D��\n"
" -alang/-slang    ��� DVD ���y/�r�����y��(�ϥΨ�r�Ū���a�N��)\n"
#endif
" -ss <position>   �M��쵹�w(�h�֬�ήɤ��� hh:mm:ss ��)��m\n"
" -nosound         �������n��\n"
" -fs              ���̼��� (�Ϊ̥� -vm, -zoom, �Ԩ��_��U��)\n"
" -x <x> -y <y>    �]�m��ܪ�����v(���ѵ� -vm �Ϊ� -zoom �ϥ�)\n"
" -sub <file>      ���w�r����� (�Ѩ� -subfps, -subdelay)\n"
" -playlist <file> ���w����C����\n"
" -vid x -aid y    ��ܥΤ_���� x ���W�y�M y ���W�y�q�D��\n"
" -fps x -srate y  ���ܵ��W�v�� x �V��(fps)�M���W�v�� y ����(Hz)\n"
" -pp <quality>    �ϥΫ���B�z�L�o��/�o�� (�Ԩ��_��U��)\n"
" -framedrop       �ϥΥ�V(�Τ_�C����)\n"
"\n"
"�򥻱��s��: (���㪺�C��Ѩ��_��U��, �P�ɤ]�Ю֬d input.conf)\n"
" <-  or  ->       ��h/�ֶi 10 ��\n"
" down or up       ��h/�ֶi 1 ����\n"
" pgdown or pgup   ��h/�ֶi 10 ����\n"
" < or >           ���켽��C�����e�@��/��@��\n"
" p or SPACE       �Ȱ�����(�����N���~��)\n"
" q or ESC         �����}�h�X�{��\n"
" + or -           �վ㭵�W����W�[/��� 0.1 ��\n"
" o                �`�� OSD �Ҧ�:  �L/�j����/�j�����[�p�ɾ�\n"
" * or /           �W�[�δ�� PCM ���q\n"
" x or z           �վ�r������W�[/��� 0.1 ��\n"
" r or t           �W/�U�վ�r����m, �Ѩ���-vf expand��\n"
"\n"
" * * *  �ԲӤ��e�A��h��(����)�ﶵ�M���s��A�аѨ���U��  * * *\n"
"\n";

#define BIG5_INFOTR_MEDIAINFO "�C��H��"
#define BIG5_INFOTR_NORMAL "��z"
#define BIG5_INFOTR_VIDEO "���W"
#define BIG5_INFOTR_AUDIO "���W"
#define BIG5_INFOTR_NAME "�ɮ�"
#define BIG5_INFOTR_DEMUXER "�e��"
#define BIG5_INFOTR_SIZE "�j�p"
#define BIG5_INFOTR_LENG "�ɪ�"
#define BIG5_INFOTR_FORMAT "�榡"
#define BIG5_INFOTR_CODEC "�ѽX��"
#define BIG5_INFOTR_BITRATE "�줸�v"
#define BIG5_INFOTR_CLIPINFO "������T"
#define BIG5_INFOTR_VIDEO_RESOLUTION "�ѪR��"
#define BIG5_INFOTR_VIDEO_ASPECT "�e����"
#define BIG5_INFOTR_VIDEO_FPS "�V�t�v"
#define BIG5_INFOTR_AUDIO_RATE "���˲v"
#define BIG5_INFOTR_AUDIO_NCH "�n�D��"
#define BIG5_INFOTR_SUB "�r��"
#define BIG5_INFOTR_UNKNOWN "����"
#define BIG5_INFOTR_TRACK "�y��"
#define BIG5_INFOTR_NAME "�W��"
#define BIG5_INFOTR_AUTHOR "�@��"
#define BIG5_INFOTR_COPYRIGHT "���v"
#define BIG5_INFOTR_COMMENTS "�`��"
#define BIG5_INFOTR_TITLE "���D"
#define BIG5_INFOTR_YEAR "�~�N"
#define BIG5_INFOTR_ALBUM "�M��"

// ========================= MPlayer messages ===========================

// mplayer.c:

//#define BIG5_MSGTR_Exiting "\n���b�h�X..\n"
//#define BIG5_MSGTR_ExitingHow "\n���b�h�X... (%s)\n"
//#define BIG5_MSGTR_BuiltinCodecsConf "�ϥΤ����q�{�� codecs.conf ���C\n"
//#define BIG5_MSGTR_CantLoadSub "����[���r��: %s\n"
//#define BIG5_MSGTR_FPSnotspecified "FPS �b����Y���S�����w�Ϊ̵L�ġA�� -fps �ﶵ�C\n"
//#define BIG5_MSGTR_StartPlaying "�}�l����...\n"

//#define BIG5_MSGTR_SystemTooSlow "\n\n"\
//"         ************************************************\n"\
//"         ****      �A���Y�Τӡ��C���F, ���񤣤F!     ****\n"\
//"         ************************************************\n"\
//" �i�઺��], ���D, �M�ѨM��k�G\n"\
//"- �̱`������]�G�l�a���Φ����~�� _���W_ �X��\n"\
//"  - �ո� -ao sdl �Ψϥ� ALSA  �� OSS �����C\n"\
//"  - ���礣�P�� -autosync ���ȡA�����q 30 �}�l�C\n"\
//"- ���W��X�ӺC\n"\
//"  - (�Ѧ� -vo help)�ո� -vo �Τ��P���X�ʩΪ̸ո� -framedrop�I\n"\
//"- CPU �ӺC\n"\
//"  - ���n�չϦb�C�t CPU �W����j�� DVD/DivX! �ոդ@�� lavdopts �ﶵ,\n"\
//"    �Ҧp: -vfm ffmpeg -lavdopts lowres=1:fast:skiploopfilter=all�C\n"\
//"- �l�a�����\n"\
//"  - �ոդU�C�ﶵ���U�زզX: -nobps -ni -forceidx -mc 0�C\n"\
//"- �ӺC���C��(�p NFS/SMB �w�E�I, DVD, VCD ��)\n"\
//"  - �ո� -cache 8192�C\n"\
//"- �A�b�� -cache �ﶵ����@�ӫD����� AVI ���H\n"\
//"  - �ո� -nocache�C\n"\
//"�\Ū DOCS/zh/video.html �M DOCS/zh/sound.html �ӴM��վ�/�[�t���ޥ��C\n"\
//"�p�G�o�Ǥ@�ӳ��Τ��W, �\Ū DOCS/zh/bugreports.html�I\n\n"

//#define BIG5_MSGTR_Playing "\n���b���� %s�C\n"
//#define BIG5_MSGTR_NoSound "���W: �S�n��\n"
//#define BIG5_MSGTR_FPSforced "FPS ��w�� %5.3f  (ftime: %5.3f)�C\n"
//#define BIG5_MSGTR_CompiledWithRuntimeDetection "�sĶ�ɥΤF��� CPU �˴��C\n"
//#define BIG5_MSGTR_CannotReadVideoProperties "���W: �L�kŪ���ݩ�\n"
//#define BIG5_MSGTR_NoStreamFound "�䤣��y�C��C\n"
//#define BIG5_MSGTR_ErrorInitializingVODevice "���}/��l�� (-vo) �ҿ諸���W��X�]�ƥX���C\n"
//#define BIG5_MSGTR_Video_NoVideo "���W: �S���W\n"
//#define BIG5_MSGTR_LoadingConfig "���b�˸��t�m��� '%s'\n"
//#define BIG5_MSGTR_LoadingProtocolProfile "�[����ĳ�������t�m����%s��\n"
//#define BIG5_MSGTR_LoadingExtensionProfile "�[���X�i�ե�������t�m����%s��\n"
//#define BIG5_MSGTR_AddedSubtitleFile "�r��: �K�[�r����� (%d): %s\n"


cd ./Tools
call clear_temp.bat

set builder="D:/Games/Steam/steamapps/common/Arma 3 Tools/AddonBuilder/AddonBuilder.exe"
set source="/Coding/GitHub Repos/KeeliCompanyAux/addons"
set destination="D:/Games/Steam/steamapps/common/Arma 3/Local Mods/KeeliCompanyAux/addons"
set include="C:\Coding\GitHub Repos\KeeliCompanyAux\addons\Tools\addon_includes.txt"
set binarize="D:\Games\Steam\steamapps\common\Arma 3 Tools\Binarize\binarize.exe"

%builder% %source%/BNA_KC_Core %destination% -include=%include% -binarize=%binarize%
%builder% %source%/BNA_KC_Gear %destination% -include=%include% -binarize=%binarize%
%builder% %source%/BNA_KC_Weapons %destination% -include=%include% -binarize=%binarize%
%builder% %source%/BNA_KC_Vehicles %destination% -include=%include% -binarize=%binarize%
%builder% %source%/BNA_KC_OPFOR %destination% -include=%include% -binarize=%binarize%
%builder% %source%/BNA_KC_Props %destination% -include=%include% -binarize=%binarize%
%builder% %source%/BNA_KC_Scripts %destination% -include=%include% -binarize=%binarize%
%builder% %source%/BNA_KC_ZeusAudioModule %destination% -include=%include% -binarize=%binarize%
%builder% %source%/BNA_KC_Rancorbuh %destination% -include=%include% -binarize=%binarize%
%builder% %source%/ChatWheelRedux %destination% -include=%include% -binarize=%binarize%
%builder% %source%/BNA_KC_Legacy %destination% -include=%include% -binarize=%binarize%
%builder% %source%/BNA_KC_Memes %destination% -include=%include% -binarize=%binarize%
# java-vosk-livesubtitle

### Il s'agit d'une application de bureau basée sur Java qui peut RECONNAÎTRE n'importe quel streaming en direct dans 21 langues prises en charge par VOSK, puis TRADUIRE et l'afficher sous forme de SOUS-TITRES EN DIRECT

https://user-images.githubusercontent.com/88623122/200159557-23b7789d-4788-445a-8f5f-93be889a2e14.mp4

Cette application a été développée avec Apache Netbeans IDE 15 https://netbeans.apache.org/download/index.html utilisant Oracle JRE v1.8.0_351 et SWING comme framework d'interface graphique.

La partie reconnaissance vocale utilise l'API java vosk https://github.com/alphacep/vosk-api/tree/master/java/lib/src/main/java/org/vosk

La partie traduction utilise une classe GoogleTranslator faite maison

Si vous souhaitez compiler ce code source en un fichier exe, vous aurez besoin de jar2exe https://www.jar2exe.com/

Ce fichier build.gradle doit contenir ces lignes en plus des autres balises standard :
```
jar {
    manifest {
        attributes(
                'Main-Class': 'org.vosk.LiveSubtitle'
        )
    }

 duplicatesStrategy = DuplicatesStrategy.INCLUDE
 from { configurations.compileClasspath.collect { it.isDirectory() ? it : zipTree(it) } }

}
```

Après Nettoyer et Compiler avec Netbeans, allez dans le dossier build\distribution et extrayez ce fichier zip.

Ensuite, ouvrez jar2exe, naviguez vers le dossier distributions\java-vosk-livesubtitle\lib, sélectionnez java-vosk-livesubtitle.jar comme source que vous souhaitez convertir en exe
<img width="960" alt="jar2exe-browse" src="https://user-images.githubusercontent.com/88623122/200141288-e7c4d2fe-46ea-4b4a-8099-238b5020ff0c.png">

Définissez la version JDK à 1.8.
<img width="960" alt="jar2exe-set-jdk" src="https://user-images.githubusercontent.com/88623122/200141294-7aae84ac-46c0-4ce9-9246-8ec444814473.png">

Choisissez l'Application GUI Windows si vous ne voulez pas voir d'exceptions de journal dans l'interface DOS.
![image](https://user-images.githubusercontent.com/88623122/200141364-a8410c16-305f-40ae-9099-1458f987fba4.png)

Ajoutez tous les autres fichiers jar dans ce dossier lib, sauf le java-vosk-livesubtitle.jar que vous avez déjà défini comme source principale.
<img width="960" alt="jar2exe-add-jar" src="https://user-images.githubusercontent.com/88623122/200141387-20fc76ff-f236-4137-b52e-f68577114af0.png">
<img width="960" alt="jar2exe-add-jar2" src="https://user-images.githubusercontent.com/88623122/200141389-87e3df55-b918-4daf-ac64-5c008aaade6e.png">

N'oubliez pas de cocher Créer un exécutable 64 bits pour éviter les erreurs de dll libvosk
![image](https://user-images.githubusercontent.com/88623122/200141628-c37bde19-573f-47d2-876e-b8d7e446a330.png)

Ensuite, cliquez sur Config Interne pour définir un paramètre de compilation supplémentaire d'encodage UTF-8 afin que vous puissiez voir et traduire correctement les caractères chinois et japonais.
![image](https://user-images.githubusercontent.com/88623122/200141910-90e65f0b-b20e-4382-acc2-810caf823e1c.png)

Sélectionnez l'onglet Personnalisé et collez ce code :
```
option -Dfile.encoding=UTF-8
```
<img width="960" alt="jar2exe-set-utf-8" src="https://user-images.githubusercontent.com/88623122/200141423-3975325a-0afc-49db-a334-f8413b845f7a.png">

Cliquez sur Appliquer et OK, puis sur Suivant pour démarrer la compilation.

Le fichier java-vosk-livesubtitle.exe sera créé dans le même dossier que ces fichiers jar (dossier lib)

Vous pouvez maintenant exécuter cette application en un seul clic.

N'oubliez pas de placer ce dossier de modèles dans le même dossier que java-vosk-livesubtitle.exe et n'oubliez pas non plus d'extraire les polices que j'ai incluses dans le fichier zip compressé dans le dossier C:\Windows\Fonts\ !

Comme d'habitude pour une meilleure qualité de reconnaissance, sous Windows, vous aurez besoin de STEREO MIX ou VIRTUAL AUDIO CABLE comme PÉRIPHÉRIQUE D'ENREGISTREMENT/ENTRÉE
![image](https://user-images.githubusercontent.com/88623122/199527559-e2609d8c-3479-420d-8c52-806fa56a21f4.png)
![image](https://user-images.githubusercontent.com/88623122/199528286-1ab77dc4-38a9-41f2-9b92-25db352a1ed2.png)
![image](https://user-images.githubusercontent.com/88623122/199528861-22541706-3bdf-427c-8c2f-44174b114e34.png)

et sous Linux, vous aurez besoin de PAVUCONTROL (en choisissant MONITOR de votre périphérique audio comme PÉRIPHÉRIQUE D'ENTRÉE)
![image](https://user-images.githubusercontent.com/88623122/199517907-76d61acb-3f07-49b6-8f2f-4b6a2b787eff.png)


### Licence
MIT

Consultez mes autres PROJETS DE RECONNAISSANCE VOCALE + TRADUCTION https://github.com/botbahlul?tab=repositories

Offrez-moi un café : https://sociabuzz.com/botbahlul/tribe
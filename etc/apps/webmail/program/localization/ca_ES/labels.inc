<?php

/*
 +-----------------------------------------------------------------------+
 | localization/<lang>/labels.inc                                        |
 |                                                                       |
 | Localization file of the Roundcube Webmail client                     |
 | Copyright (C) 2005-2013, The Roundcube Dev Team                       |
 |                                                                       |
 | Licensed under the GNU General Public License version 3 or            |
 | any later version with exceptions for skins & plugins.                |
 | See the README file for a full license statement.                     |
 |                                                                       |
 +-----------------------------------------------------------------------+

 For translation see https://www.transifex.com/projects/p/roundcube-webmail/resource/labels/
*/

$labels = array();

// login page
$labels['welcome']   = 'Benvingut a $product';
$labels['username']  = 'Nom d\'usuari';
$labels['password']  = 'Contrasenya';
$labels['server']    = 'Servidor';
$labels['login']     = 'Entra';

// taskbar
$labels['logout']   = 'Tanca sessió';
$labels['mail']     = 'Correu';
$labels['settings'] = 'Configuració';
$labels['addressbook'] = 'Contactes';

// mailbox names
$labels['inbox']  = 'Safata d\'entrada';
$labels['drafts'] = 'Esborranys';
$labels['sent']   = 'Enviats';
$labels['trash']  = 'Paperera';
$labels['junk']   = 'Correu brossa';

// message listing
$labels['subject'] = 'Assumpte';
$labels['from']    = 'Remitent';
$labels['sender']  = 'Remitent';
$labels['to']      = 'Destinatari';
$labels['cc']      = 'Cc';
$labels['bcc']     = 'Bcc';
$labels['replyto'] = 'Respon a';
$labels['followupto'] = 'Seguiment-a';
$labels['date']    = 'Data';
$labels['size']    = 'Mida';
$labels['priority'] = 'Prioritat';
$labels['organization'] = 'Organització';
$labels['readstatus'] = 'Estat de lectura';
$labels['listoptions'] = 'Llista d\'opcions...';

$labels['mailboxlist'] = 'Carpetes';
$labels['messagesfromto'] = 'Missatges des de $from a $to de $count';
$labels['threadsfromto'] = 'Fils $from a $to de $count';
$labels['messagenrof'] = 'Missatge $nr de $count';
$labels['fromtoshort'] = '$from - $to de $count';

$labels['copy']     = 'Copia';
$labels['move']     = 'Mou';
$labels['moveto']   = 'Mou a...';
$labels['download'] = 'Descarrega';
$labels['open']     = 'Obre';
$labels['showattachment'] = 'Mostra';
$labels['showanyway'] = 'Mostra-ho de totes maneres';

$labels['filename'] = 'Nom del fitxer';
$labels['filesize'] = 'Mida del fitxer';

$labels['addtoaddressbook'] = 'Afegeix a contactes';

// weekdays short
$labels['sun'] = 'Diu';
$labels['mon'] = 'Dll';
$labels['tue'] = 'Dmt';
$labels['wed'] = 'Dmc';
$labels['thu'] = 'Dij';
$labels['fri'] = 'Div';
$labels['sat'] = 'Dis';

// weekdays long
$labels['sunday']    = 'Diumenge';
$labels['monday']    = 'Dilluns';
$labels['tuesday']   = 'Dimarts';
$labels['wednesday'] = 'Dimecres';
$labels['thursday']  = 'Dijous';
$labels['friday']    = 'Divendres';
$labels['saturday']  = 'Dissabte';

// months short
$labels['jan']	= 'gen';
$labels['feb']	= 'feb';
$labels['mar']	= 'mar';
$labels['apr']	= 'abr';
$labels['may']	= 'mai';
$labels['jun']	= 'jun';
$labels['jul'] 	= 'jul';
$labels['aug']	= 'ago';
$labels['sep']	= 'set';
$labels['oct']	= 'oct';
$labels['nov']	= 'nov';
$labels['dec']	= 'des';

// months long
$labels['longjan']	= 'gener';
$labels['longfeb']	= 'febrer';
$labels['longmar']	= 'març';
$labels['longapr']	= 'abril';
$labels['longmay']	= 'mai';
$labels['longjun']	= 'juny';
$labels['longjul']	= 'juliol';
$labels['longaug']	= 'agost';
$labels['longsep']	= 'setembre';
$labels['longoct']	= 'octubre';
$labels['longnov']	= 'novembre';
$labels['longdec']	= 'desembre';

$labels['today'] = 'Avui';

// toolbar buttons
$labels['refresh']          = 'Actualitza';
$labels['checkmail']        = 'Recupera missatges nous';
$labels['compose']          = 'Escriu un missatge';
$labels['writenewmessage']  = 'Crea un nou missatge';
$labels['reply']            = 'Respon';
$labels['replytomessage']   = 'Respon al remitent';
$labels['replytoallmessage'] = 'Respon al remitent i a tots els destinataris';
$labels['replyall']         = 'Respon a tots';
$labels['replylist']        = 'Llista de resposta';
$labels['forward']          = 'Reenvia';
$labels['forwardinline']    = 'Reenvia com en línia';
$labels['forwardattachment'] = 'Reenvia com a adjunt';
$labels['forwardmessage']   = 'Reenvia el missatge';
$labels['deletemessage']    = 'Suprimeix el missatge';
$labels['movemessagetotrash'] = 'Mou el missatge a la paperera';
$labels['printmessage']     = 'Imprimeix aquest missatge';
$labels['previousmessage']  = 'Mostra el missatge anterior';
$labels['firstmessage']     = 'Mostra el primer missatge';
$labels['nextmessage']      = 'Mostra el missatge següent';
$labels['lastmessage']      = 'Mostra l\'últim missatge';
$labels['backtolist']       = 'Torna a la llista de missatges';
$labels['viewsource']       = 'Mostra el codi font';
$labels['mark']             = 'Marca';
$labels['markmessages']     = 'Marca missatges';
$labels['markread']         = 'Com a llegits';
$labels['markunread']       = 'Com a no llegits';
$labels['markflagged']      = 'Com a marcat';
$labels['markunflagged']    = 'Com a no marcat';
$labels['moreactions']      = 'Més accions...';
$labels['more']             = 'Més';
$labels['back']             = 'Torna';
$labels['options']          = 'Opcions';

$labels['select'] = 'Selecciona';
$labels['all'] = 'Tots';
$labels['none'] = 'Cap';
$labels['currpage'] = 'Pàgina actual';
$labels['unread'] = 'No llegits';
$labels['flagged'] = 'Marcat';
$labels['unanswered'] = 'No respost';
$labels['withattachment'] = 'Amb fitxer adjunt';
$labels['deleted'] = 'Suprimit';
$labels['undeleted'] = 'No s\'ha suprimit';
$labels['invert'] = 'Inverteix';
$labels['filter'] = 'Filtre';
$labels['list'] = 'Llista';
$labels['threads'] = 'Fils de discusió';
$labels['expand-all'] = 'Expandeix tots';
$labels['expand-unread'] = 'Expandeix No llegits';
$labels['collapse-all'] = 'Redueix tots';
$labels['threaded'] = 'Encadenat';

$labels['autoexpand_threads'] = 'Expandeix els missatges encadenats';
$labels['do_expand'] = 'tots els fils de discusió';
$labels['expand_only_unread'] = 'només amb missatges no llegits';
$labels['fromto'] = 'Remitent/Destinatari';
$labels['flag'] = 'Marca';
$labels['attachment'] = 'Adjunció';
$labels['nonesort'] = 'Cap';
$labels['sentdate'] = 'Data d\'enviament';
$labels['arrival'] = 'Data d\'arribada';
$labels['asc'] = 'ascendent';
$labels['desc'] = 'descendent';
$labels['listcolumns'] = 'Llista les columnes';
$labels['listsorting'] = 'Columna d\'ordenació';
$labels['listorder'] = 'Ordre d\'ordenació';
$labels['listmode'] = 'Mode de vista de llista';

$labels['folderactions'] = 'Accions de carpeta';
$labels['compact'] = 'Compacta';
$labels['empty'] = 'Buida';

$labels['quota'] = 'Ús del disc';
$labels['unknown']  = 'desconegut';
$labels['unlimited']  = 'il·limitat';

$labels['quicksearch']  = 'Cerca ràpida';
$labels['resetsearch']  = 'Neteja cerca';
$labels['searchmod']  = 'Cerca modificadors';
$labels['msgtext']  = 'Missatge sencer';
$labels['body']  = 'Cos';

$labels['openinextwin'] = 'Obre a una nova finestra';
$labels['emlsave'] = 'Descarrega (.eml)';
$labels['changeformattext'] = 'Mostra en format de text net';
$labels['changeformathtml'] = 'Mostra en format HTML';

// message compose
$labels['editasnew']      = 'Edita com a nou';
$labels['send']           = 'Enviar';
$labels['sendmessage']    = 'Envia el missatge';
$labels['savemessage']    = 'Desa aquest esborrany';
$labels['addattachment']  = 'Adjunta un fitxer';
$labels['charset']        = 'Codificació de caràcters';
$labels['editortype']     = 'Tipus d\'editor';
$labels['returnreceipt']  = 'Confirmació de recepció';
$labels['dsn']            = 'Notificació d\'estat de lliurament';
$labels['mailreplyintro'] = 'A $date, $sender escrigué:';
$labels['originalmessage'] = 'Missatge Original';

$labels['editidents']    = 'Edita identitats';
$labels['spellcheck']    = 'Ortografia';
$labels['checkspelling'] = 'Comprova l\'ortografia';
$labels['resumeediting'] = 'Reprèn l\'edició';
$labels['revertto']      = 'Torna a';

$labels['attach'] = 'Adjunta';
$labels['attachments'] = 'Adjuncions';
$labels['upload'] = 'Afegeix';
$labels['uploadprogress'] = '$percent ($current de $total)';
$labels['close']  = 'Tanca';
$labels['messageoptions']  = 'Opcions de missatge...';

$labels['low']     = 'Baixa';
$labels['lowest']  = 'La més baixa';
$labels['normal']  = 'Normal';
$labels['high']    = 'Alta';
$labels['highest'] = 'La més alta';

$labels['nosubject']  = '(sense assumpte)';
$labels['showimages'] = 'Mostra les imatges';
$labels['alwaysshow'] = 'Mostra sempre les imatges de $sender';
$labels['isdraft']    = 'Aquest és un missatge esborrany.';
$labels['andnmore']   = '$nr més...';
$labels['togglemoreheaders'] = 'Mostra més capçaleres del missatge';
$labels['togglefullheaders'] = 'Conmuta les capçaleres de text cru';

$labels['htmltoggle'] = 'HTML';
$labels['plaintoggle'] = 'Text net';
$labels['savesentmessagein'] = 'Desa el missatge enviat a';
$labels['dontsave'] = 'no ho desis';
$labels['maxuploadsize'] = 'El mida màxima del fitxer és $size';

$labels['addcc'] = 'Afegeix Cc';
$labels['addbcc'] = 'Afegeix Bcc';
$labels['addreplyto'] = 'Afegeix Respon-A';
$labels['addfollowupto'] = 'Afegir Seguiment-A';

// mdn
$labels['mdnrequest'] = 'El remitent d\'aquest missatge ha demanat ser notificat quan llegiu aquest missatge. Voleu notificar al remitent?';
$labels['receiptread'] = 'Confirmació de recepció';
$labels['yourmessage'] = 'Això és una confirmació de recepció per al vostre missatge';
$labels['receiptnote'] = 'Nota: Aquesta confirmació només indica que el missatge ha estat mostrat a l\'ordinador del destinatari. No hi ha garantia que el destinatari hagi llegit o entès el contingut del missatge.';

// address boook
$labels['name']         = 'Nom a mostrar';
$labels['firstname']    = 'Nom';
$labels['surname']      = 'Cognom';
$labels['middlename']   = 'Segon Nom';
$labels['nameprefix']   = 'Prefix';
$labels['namesuffix']   = 'Sufix';
$labels['nickname']     = 'Àlies';
$labels['jobtitle']     = 'Càrrec';
$labels['department']   = 'Departament';
$labels['gender']       = 'Sexe';
$labels['maidenname']   = 'Cognom de Solter/a';
$labels['email']        = 'Correu electrònic';
$labels['phone']        = 'Telèfon';
$labels['address']      = 'Adreça';
$labels['street']       = 'Carrer';
$labels['locality']     = 'Ciutat';
$labels['zipcode']      = 'Codi postal';
$labels['region']       = 'Estat/Província';
$labels['country']      = 'País';
$labels['birthday']     = 'Data de naixement';
$labels['anniversary']  = 'Aniversari';
$labels['website']      = 'Pàgina web';
$labels['instantmessenger'] = 'IM';
$labels['notes'] = 'Notes';
$labels['male']   = 'home';
$labels['female'] = 'dona';
$labels['manager'] = 'Gerent';
$labels['assistant'] = 'Assistent';
$labels['spouse'] = 'Cònjuge';
$labels['allfields'] = 'Tots els camps';
$labels['search'] = 'Cerca';
$labels['advsearch'] = 'Cerca Avançada';
$labels['advanced'] = 'Paràmetres avançats';
$labels['other'] = 'Un altre';

$labels['typehome']   = 'Casa';
$labels['typework']   = 'Feina';
$labels['typeother']  = 'Un altre';
$labels['typemobile']  = 'Mòbil';
$labels['typemain']  = 'Principal';
$labels['typehomefax']  = 'Fax particular';
$labels['typeworkfax']  = 'Fax de la feina';
$labels['typecar']  = 'Cotxe';
$labels['typepager']  = 'Cercapersones';
$labels['typevideo']  = 'Vídeo';
$labels['typeassistant']  = 'Assistent';
$labels['typehomepage']  = 'Pàgina Inicial';
$labels['typeblog'] = 'Bloc';
$labels['typeprofile'] = 'Perfil';

$labels['addfield'] = 'Afegeix camp...';
$labels['addcontact'] = 'Afegeix un nou contacte';
$labels['editcontact'] = 'Edita el contacte';
$labels['contacts'] = 'Contactes';
$labels['contactproperties'] = 'Propietats del contacte';
$labels['personalinfo'] = 'Informació personal';

$labels['edit']   = 'Edita';
$labels['cancel'] = 'Cancel·la';
$labels['save']   = 'Desa';
$labels['delete'] = 'Suprimeix';
$labels['rename'] = 'Reanomena';
$labels['addphoto'] = 'Afegeix';
$labels['replacephoto'] = 'Reemplaça';
$labels['uploadphoto'] = 'Puja una fotografia';

$labels['newcontact']     = 'Crea un nou contacte';
$labels['deletecontact']  = 'Suprimeix els contactes seleccionats';
$labels['composeto']      = 'Redacta correu per a';
$labels['contactsfromto'] = 'Contactes $from a $to de $count';
$labels['print']          = 'Imprimeix';
$labels['export']         = 'Exporta';
$labels['exportall']      = 'Exporta\'ls tots';
$labels['exportsel']      = 'Exporta els seleccionats';
$labels['exportvcards']   = 'Exporta contactes en format vCard';
$labels['newcontactgroup'] = 'Crea un nou grup de contactes';
$labels['grouprename']    = 'Reanomena el grup';
$labels['groupdelete']    = 'Suprimeix el grup';
$labels['groupremoveselected'] = 'Suprimeix els contactes seleccionats del grup';

$labels['previouspage']   = 'Mostra la pàgina anterior';
$labels['firstpage']      = 'Mostra la primera pàgina';
$labels['nextpage']       = 'Mostra la pàgina següent';
$labels['lastpage']       = 'Mostra la darrera pàgina';

$labels['group'] = 'Grup';
$labels['groups'] = 'Grups';
$labels['personaladrbook'] = 'Llibreta d\'adreces';

$labels['searchsave'] = 'Desa la cerca';
$labels['searchdelete'] = 'Suprimeix la cerca';

$labels['import'] = 'Importa';
$labels['importcontacts'] = 'Importa contactes';
$labels['importfromfile'] = 'Importa des d\'un fitxer:';
$labels['importtarget'] = 'Afegeix contactes nous a la llibreta d\'adreces:';
$labels['importreplace'] = 'Reemplaça la llibreta d\'adreçes sencera';
$labels['importdesc'] = 'Podeu carregar contactes des d\'una llibreta de direccions.<br/>Actualment donem suport a la importació d\'adreces des de fitxers de tipus <a href="http://ca.wikipedia.org/wiki/VCard">vCard</a> o CSV (valors separats per comes).';
$labels['done'] = 'Fet';

// settings
$labels['settingsfor'] = 'Configuració per a';
$labels['about'] = 'Quant a';
$labels['preferences'] = 'Preferències';
$labels['userpreferences'] = 'Preferències de l\'usuari';
$labels['editpreferences'] = 'Edita les preferències de l\'usuari';

$labels['identities'] = 'Identitats';
$labels['manageidentities'] = 'Gestiona les identitats per a aquest compte';
$labels['newidentity'] = 'Nova identitat';

$labels['newitem'] = 'Nou element';
$labels['edititem'] = 'Edita l\'element';

$labels['preferhtml'] = 'Mostra HTML';
$labels['defaultcharset'] = 'Joc de caràcters per defecte';
$labels['htmlmessage'] = 'Missatge HTML';
$labels['messagepart'] = 'Part';
$labels['digitalsig'] = 'Signatura digital';
$labels['dateformat'] = 'Format de la data';
$labels['timeformat'] = 'Format horari';
$labels['prettydate'] = 'Dates curtes';
$labels['setdefault']  = 'Posa-ho per defecte';
$labels['autodetect']  = 'Auto';
$labels['language']  = 'Idioma';
$labels['timezone']  = 'Fus horari';
$labels['pagesize']  = 'Files per pàgina';
$labels['signature'] = 'Signatura';
$labels['dstactive']  = 'Horari d\'estiu';
$labels['showinextwin'] = 'Obrir el missatge en una nova finestra';
$labels['composeextwin'] = 'Redactar en una nova finestra';
$labels['htmleditor'] = 'Escriu missatges en HTML';
$labels['htmlonreply'] = 'només en resposta a missatges en HTML';
$labels['htmlonreplyandforward'] = 'en reenviament o resposta a missatge HTML';
$labels['htmlsignature'] = 'Signatura en HTML';
$labels['showemail'] = 'Show email address with display name';
$labels['previewpane'] = 'Mostra el panell de previsualització';
$labels['skin'] = 'Aparença d\'interfície';
$labels['logoutclear'] = 'Buida la paperera al tancar la sessió';
$labels['logoutcompact'] = 'Compacta la safata d\'entrada al tancar la sessió';
$labels['uisettings'] = 'Interfície de l\'usuari';
$labels['serversettings'] = 'Configuració del servidor';
$labels['mailboxview'] = 'Vista de la bústia';
$labels['mdnrequests'] = 'Notificacions de confirmació de recepció';
$labels['askuser'] = 'demana\'m què vull fer';
$labels['autosend'] = 'envia la confirmació de recepció';
$labels['autosendknown'] = 'envia la confirmació de recepció als meus contactes, pels demés damana-m\'ho';
$labels['autosendknownignore'] = 'envia la confirmació als meus contactes, pels demés ignora-ho';
$labels['ignore'] = 'ignora';
$labels['readwhendeleted'] = 'Marca el missatge com a llegit quan se suprimeixi';
$labels['flagfordeletion'] = 'Marca el missatge com a suprimit en comptes de suprimir-lo';
$labels['skipdeleted'] = 'No mostris els missatges suprimits';
$labels['deletealways'] = 'Si falla quan es mou un missatge a la Paperera, aleshores suprimeix-lo';
$labels['deletejunk'] = 'Suprimeix directament els missatges de Correu brossa';
$labels['showremoteimages'] = 'Mostra les imatges remotes del missatge';
$labels['fromknownsenders'] = 'de remitent conegut';
$labels['always'] = 'sempre';
$labels['showinlineimages'] = 'Mostra les imatges adjuntes sota el missatge';
$labels['autosavedraft']  = 'Desa l\'esborrany automàticament';
$labels['everynminutes']  = 'cada $n minut(s)';
$labels['refreshinterval']  = 'Resfrescar (comprovar nous missatges, etc.)';
$labels['never']  = 'mai';
$labels['immediately']  = 'immediatament';
$labels['messagesdisplaying'] = 'Vista de missatges';
$labels['messagescomposition'] = 'Composició de missatges';
$labels['mimeparamfolding'] = 'Noms dels adjunts';
$labels['2231folding'] = 'Compleix RFC 2231 (Thunderbird)';
$labels['miscfolding'] = 'RFC 2047/2231 (MS Outlook)';
$labels['2047folding'] = 'Compleix RFC 2047 (un altre)';
$labels['force7bit'] = 'Fes servir la codificació MIME per a caràcters de 8-bits';
$labels['advancedoptions'] = 'Opcions avançades';
$labels['focusonnewmessage'] = 'Envia el focus al navegador quan hi hagi un nou missatge';
$labels['checkallfolders'] = 'Comprova totes les carpetes per missatges nous';
$labels['displaynext'] = 'Mostra el següent missatge després de suprimir-ne o moure\'n un';
$labels['defaultfont'] = 'Font de lletra per defecte de missatge HTML';
$labels['mainoptions'] = 'Opcions principals';
$labels['browseroptions'] = 'Opcions del navegador';
$labels['section'] = 'Secció';
$labels['maintenance'] = 'Manteniment';
$labels['newmessage'] = 'Missatge nou';
$labels['signatureoptions'] = 'Opcions de signatura';
$labels['whenreplying'] = 'Quan es respon';
$labels['replyempty'] = 'do citis el missatge original';
$labels['replytopposting'] = 'comença el missatge nou per sobre de l\'original';
$labels['replybottomposting'] = 'comença el missatge nou per sota de l\'original';
$labels['replyremovesignature'] = 'Quan es contesti, suprimeix la signatura original del missatge';
$labels['autoaddsignature'] = 'Afegeix la signatura automàticament';
$labels['newmessageonly'] = 'només si és un missatge nou';
$labels['replyandforwardonly'] = 'només a respostes i reenviaments';
$labels['insertsignature'] = 'Inserta la signatura';
$labels['previewpanemarkread']  = 'Marca els missatges previsualitzats com a llegits';
$labels['afternseconds']  = 'després de $n segons';
$labels['reqmdn'] = 'Demana sempre la confirmació de recepció';
$labels['reqdsn'] = 'Demana sempre una notificació d\'estat de lliurament';
$labels['replysamefolder'] = 'Posa les respostes a la carpeta del missatge que es respon';
$labels['defaultabook'] = 'Llibreta d\'adreces per defecte';
$labels['autocompletesingle'] = 'Omet adreces alternatives quan s\'autocompleti';
$labels['listnamedisplay'] = 'Llista contactes com a';
$labels['spellcheckbeforesend'] = 'Comprova l\'ortografia abans d\'enviar un missatge';
$labels['spellcheckoptions'] = 'Opcions del corrector ortogràfic';
$labels['spellcheckignoresyms'] = 'Ignora paraules amb símbols';
$labels['spellcheckignorenums'] = 'Ignora paraules amb números';
$labels['spellcheckignorecaps'] = 'Ignora paraules amb lletres capitalitzades';
$labels['addtodict'] = 'Afegeix al diccionari';
$labels['mailtoprotohandler'] = 'Registra controlador de protocol pels enllaços mailto:';
$labels['forwardmode'] = 'Reenviament de missatges';
$labels['inline'] = 'en línia';
$labels['asattachment'] = 'com adjunt';

$labels['folder']  = 'Carpeta';
$labels['folders']  = 'Carpetes';
$labels['foldername']  = 'Nom de la carpeta';
$labels['subscribed']  = 'Subscrit';
$labels['messagecount'] = 'Missatges';
$labels['create']  = 'Crea';
$labels['createfolder']  = 'Crea una carpeta nova';
$labels['managefolders']  = 'Gestiona carpetes';
$labels['specialfolders'] = 'Carpetes especials';
$labels['properties'] = 'Propietats';
$labels['folderproperties'] = 'Propietats de la carpeta';
$labels['parentfolder'] = 'Carpeta superior';
$labels['location'] = 'Ubicació';
$labels['info'] = 'Informació';
$labels['getfoldersize'] = 'Feu clic per veure la mida de la carpeta';
$labels['changesubscription'] = 'Feu clic per canviar la subscripció';
$labels['foldertype'] = 'Tipus de Carpeta';
$labels['personalfolder']  = 'Carpeta privada';
$labels['otherfolder']  = 'Carpeta d\'un altre usuari';
$labels['sharedfolder']  = 'Carpeta pública';

$labels['sortby'] = 'Ordena per';
$labels['sortasc']  = 'Ordena ascendentment';
$labels['sortdesc'] = 'Ordena descendentment';
$labels['undo'] = 'Desfés';

$labels['installedplugins'] = 'Connectors Instal·lats';
$labels['plugin'] = 'Complement';
$labels['version'] = 'Versió';
$labels['source'] = 'Font';
$labels['license'] = 'Llicència';
$labels['support'] = 'Obtingueu ajuda';

// units
$labels['B'] = 'B';
$labels['KB'] = 'KB';
$labels['MB'] = 'MB';
$labels['GB'] = 'GB';

// character sets
$labels['unicode'] = 'Unicode';
$labels['english'] = 'Anglès';
$labels['westerneuropean'] = 'Europeu occidental';
$labels['easterneuropean'] = 'Europeu oriental';
$labels['southeasterneuropean'] = 'Europeu Sud-Oriental';
$labels['baltic'] = 'Bàltic';
$labels['cyrillic'] = 'Ciríl·lic';
$labels['arabic'] = 'Àrab';
$labels['greek'] = 'Grec';
$labels['hebrew'] = 'Hebreu';
$labels['turkish'] = 'Turc';
$labels['nordic'] = 'Nòrdic';
$labels['thai'] = 'Tailandès';
$labels['celtic'] = 'Cèltic';
$labels['vietnamese'] = 'Vietnamita';
$labels['japanese'] = 'Japonès';
$labels['korean'] = 'Coreà';
$labels['chinese'] = 'Xinès';

?>

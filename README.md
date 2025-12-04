# ProjectShooter
<img width="1462" height="898" alt="image" src="https://github.com/user-attachments/assets/5165de6b-637f-493b-b67d-36e71f166c95" />
<br><br/>

## 프로젝트 개요
- **프로젝트 이름**: ProjectShooter
- **프로젝트 기간**: 2025.08.04 ~ 진행 중 (최신 업데이트: 2025.09.14)
- **팀 구성**: 개인 프로젝트
- **링크: [[시연 영상]](https://www.youtube.com/watch?v=L_QDgLc6cH8) [[개발 과정]](https://velog.io/@lmg0052/series/Unreal-Engine-5-FPS-%EA%B2%8C%EC%9E%84)**
<br><br/>

## 프로젝트 목표
Unreal Engine 5 환경에서 1인칭 시점 FPS 슈팅 게임을 설계 및 구현.

정해진 코스를 빠르게 돌며 적을 제압하고, 최고 점수 갱신을 목표로 함.

Blueprint로 먼저 제작하고, 점차 C++로 전환하며 UE5의 핵심 기능(Enhanced Input, SaveGame, Anim Montage, Animation Blueprint, Widget 등)을 직접 적용하여 개발 역량을 강화.
<br><br/>

## 플랫폼 및 기술 스택
- **게임 엔진**: Unreal Engine 5.5
- **프로그래밍 언어**: Blueprint / C++
- **플랫폼**: PC
<br><br/>

## 핵심 기능
- **플레이어 입력(Enhanced Input)**

IMC/IA 기반 이동.

- **무기 시스템(AR/SMG)**

Fire(SemiAuto/FullAuto), Reload, Swap(Main↔Sub), 탄수/모드 HUD 연동.

- **레이저 포인터**

On/Off 토글, LineTrace로 장애물과 거리 반영하여 길이 동적 스케일링.

- **타깃 시스템**

트리거 진입 시 등장, Bullet에 피격 시 KnockDown, 인질/적 구분.

- **점수·랭킹**

SaveGame을 사용하여 저장/로드, Top10 랭킹 유지 및 UI 갱신.

- **애니메이션**
  
State Machine(Idle↔Aim/Run), Anim Montage(Reload/Swap), Notify/Delegate 처리, 무기별 애니메이션 구현.

Lower Body 추가(다리 Mesh), Shadow 전용 Mesh/ABP + IK 연동, Aim Offset으로 상하 시선 반영.

- **애니메이션 리타겟팅**

IK Rig과 Animation Retargeter를 사용하여 다른 Asset에 존재하는 Animation을 내 Character의 Animation으로 Retargeting하여 사용.

- **레벨 디자인**

사막 군사기지 컨셉으로 코스/타깃 배치.

- **C++ 전환 진행**

Character/GameMode/PlayerController/Weapon 등 Blueprint로 구현했던 기능을 C++로 전환하는 작업 진행.
<br><br/>

## 사용한 Asset
- **FPS Weapon Bundle**: https://www.fab.com/ko/listings/8aeb9c48-b404-4dcd-9e56-1d0ecedba7f5
  - Weapon

- **Scanned 3D People Pack**: https://www.fab.com/ko/listings/2e872a96-686e-4955-8256-82fa19904f92
  - Hostage

- **Construction Site VOL. 1 - Supply and Material Props**: https://www.fab.com/ko/listings/ba44a508-bfa5-444c-bbf4-69e8b5dee530
- **Modular Military Operation Urban Training Environment**: https://www.fab.com/ko/listings/84f1e82f-75a7-4274-9078-d7918cce6e66
- **M923 Truck (West)**: https://www.fab.com/ko/listings/a29d90d3-486f-4b94-92fc-ec6431ad98e3
- **M1126 Stryker ICV (West)**: https://www.fab.com/ko/listings/75d9a699-ff79-4e4f-a3bd-87e78f35271f
  - Level Design

- **Lyra Starter Game**: https://www.fab.com/ko/listings/93faede1-4434-47c0-85f1-bf27c0820ad0
  - Animation Retargeting

- **Quantum Modular Character Free Sample**: https://www.fab.com/ko/listings/8e200050-3158-4762-b297-f785b5b1533d
  - Character

사용한 Asset File들은 저작권 관련 문제가 발생하는 것을 방지하기 위해 업로드에서 제외함.

필요한 에셋은 위에 제공된 링크에서 개별적으로 다운로드 받아 추가해야함.
<br><br/>

## 개발 과정
https://velog.io/@lmg0052/series/Unreal-Engine-5-FPS-%EA%B2%8C%EC%9E%84
<br><br/>

# 게임 스크린샷
- **Level Design**
<img width="1459" height="894" alt="image" src="https://github.com/user-attachments/assets/1797e895-29e2-4edd-a48e-94893b93cfc9" />
<img width="1457" height="895" alt="image" src="https://github.com/user-attachments/assets/3ca69ef4-cd5a-42a5-9b95-81ba4f7342b5" />

- **무기 Swap**
<img width="1460" height="897" alt="image" src="https://github.com/user-attachments/assets/1c3ff0c9-a06a-4767-ba80-326112e13eeb" />
<img width="1461" height="896" alt="image" src="https://github.com/user-attachments/assets/9ceb65d2-c430-42d5-9102-9705d042f3a3" />

- **LaserPointer**
<img width="1458" height="893" alt="image" src="https://github.com/user-attachments/assets/ab1bdbd7-8591-48a4-9ebd-0d91b511ad90" />

- **적 처치**
<img width="1457" height="894" alt="image" src="https://github.com/user-attachments/assets/1f78e0d1-6c37-46b1-8dc8-f82832697c5b" />
<img width="1456" height="896" alt="image" src="https://github.com/user-attachments/assets/7fb39889-260c-42b7-88b6-c75a260c8710" />
<img width="1451" height="892" alt="image" src="https://github.com/user-attachments/assets/51766b19-5560-409f-992e-4ba43debc34c" />

- **게임 종료 및 점수 집계**
<img width="1458" height="896" alt="image" src="https://github.com/user-attachments/assets/b27bef7b-2f76-46ac-8dec-7439d69e804d" />
<br><br/>

# 트러블 슈팅
- **Character와 Camera를 별개의 Component로 두었을 때, 카메라가 회전 시 화면 우측 하단에 Weapon이 위치하지 않고 화면에서 벗어나는 현상이 발생.**

→ Camera → Character → Weapon 구조로 설정하여 Camera가 회전 시 따라가는 방식으로 우측 하단에 Weapon을 고정시킴.

→ 실제 Character도 회전하기 때문에 몸체를 보여주는 Lower Body Mesh를 추가하여 화면을 아래로 내렸을 때 몸이 보이도록 설정.

- **Run 애니메이션의 RootMotion 설정 값으로 인해 실제 Character와 Animation의 위치가 동기화되지 않는 현상 발생.**

→ RootMotion을 비활성화를 해도 비활성화 되지 않고 똑같은 문제가 계속 발생함.

→ Retarget 시 Root 체인을 추가하고 Translation Mode를 Globally Scaled로 설정 후 다시 Export.

→ 다시 Retargeting된 애니메이션을 적용하니 RootMotion이 제대로 비활성화 됨.

- **하반신을 보여주는 Lower Body Mesh와 실제 Character의 Body Mesh가 나누어져 있어서 그림자가 실제 동작과 불일치하는 현상 발생.**

→ Lower Body Mesh와 Character Mesh의 그림자를 비활성화하고, 그림자 전용 Shadow Body Mesh를 추가함.

→ 실제 Character의 동작에 따라 Mesh가 움직이도록 Shadow Animation Blueprint 생성 및 적용.

→ Character의 Reload, Swap, Run 등 다양한 움직임에 대해 그림자가 제대로 표현됨.
<br><br/>

    
- **Shadow Body Animation Blueprint**
<img width="1414" height="502" alt="image" src="https://github.com/user-attachments/assets/18973fd9-d3a0-432c-939d-e1e1081166ec" />
<img width="1167" height="546" alt="image" src="https://github.com/user-attachments/assets/0cc54ea6-413f-4dc1-bf28-8fe63dc51b8a" />

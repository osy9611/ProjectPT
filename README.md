# ProjectPT - Unreal Engine Project

**ProjectPT**는 Unity에서 작업했던 경험을 바탕으로 Unreal Engine 환경으로 재구성하며, 게임 개발 과정에서의 문제 해결과 경험을 정리한 프로젝트입니다.
Unity에서 사용했던 기술(예: TableGenerator, Addressable)과 Unreal Engine5 환경에서 구현 및 개선하면서, 엔진 간의 차이점을 비교하고, 새로운 기술을 익히는 데 집중했습니다.

## 프로젝트 주요 내용 ##
- Unity의 시스템을 Unreal Engine에 맞게 변경 및 적용
- Unreal의 주요 시스템 (GAS, Experience, Subsystem 등) 학습 및 활용
- AI, UI, DataTable 등 다양한 기능 개발

## 기술 스택 ##
✔ **Engine:** Unreal Engine 5  
✔ **Language:** C++, Python ,Blueprint 

## 관련 문서 ##
- [ GitHub 위키](https://github.com/osy9611/ProjectPT/wiki)
- [ Unity 프로젝트 (ProjectT)](https://github.com/osy9611/ProjectT)

## 영상 링크 ##
- [ 영상 링크 ](https://youtu.be/AaxhsxUV9HY)

---

## 콘텐츠

### Mail
- 붕괴 스타레일 우편 시스템을 모작해 메일 리스트 뷰, 상세 팝업, 보상 수령 및 삭제 등의 기능을 구현했습니다.
- **[자세히 보기](https://github.com/osy9611/ProjectPT/wiki/Mail)**
- **작업 결과**

  <a href="https://github.com/osy9611/ProjectPT/wiki/Mail">
    <img src="https://github.com/user-attachments/assets/de08e167-ad53-49b5-b85b-f5280df9bf9c" width="50%" height="50%" alt="우편 시스템 작업 결과 GIF">
  </a>

### Event
- 붕괴 스타레일 이벤트 시스템을 모작해 이벤트 타이머, RedDot, 이벤트 배너 등의 기능을 구현했습니다.
- **[자세히 보기](https://github.com/osy9611/ProjectPT/wiki/Event)**
- **작업 결과**

  <a href="https://github.com/osy9611/ProjectPT/wiki/Event">
    <img src="https://github.com/user-attachments/assets/5df4f67d-9a0f-4b9f-8fdb-1de4435dd548" width="50%" height="50%" alt="우편 시스템 작업 결과 GIF">
  </a>

### Inventory
- 인벤토리 시스템을 구현해 아이템 이동, 정렬, 필터링, 툴팁 등의 기능을 구현했습니다.
- **[자세히 보기](https://github.com/osy9611/ProjectPT/wiki/Inventory)**
- **작업 결과**

  <a href="https://github.com/osy9611/ProjectPT/wiki/Inventory">
    <img src="https://github.com/user-attachments/assets/dee01e23-6909-4b33-af9e-c8e9306784d3" width="50%" height="50%" alt="인벤토리 시스템 작업 결과 GIF">
  </a>

## 시스템

### UI 시스템
- Unity의 UIManager를 Unreal의 UIManagerSubsystem 으로 변환
- GameplayTag 기반 UI Layer 관리 (Static, Dynamic, System)
- **[자세히 보기](https://github.com/osy9611/ProjectPT/wiki/UISystem)**

### DataTable
- CSV 기반 DataTable 자동 생성 및 직렬화 저장
  - **[자세히 보기](https://github.com/osy9611/ProjectPT/wiki/DataTable)**

### Subsystem (Unity의 Manager 시스템을 Unreal에 적용)
- Unity에서 사용했던 Manager 패턴을 Unreal의 Subsystem 구조로 변환
- 게임 내 시스템을 `GameInstanceSubsystem` 및 `WorldSubsystem`으로 관리
- **[자세히 보기](https://github.com/osy9611/ProjectPT/wiki/Subsystem)**

### Camera System
- 다양한 카메라 모드를 유연하게 관리
- **[자세히 보기](https://github.com/osy9611/ProjectPT/wiki/Camera-System)**
- **작업 결과**

  <a href="https://github.com/osy9611/ProjectPT/wiki/Camera-System">
    <img src="https://github.com/user-attachments/assets/f4843152-0221-45cb-94e1-36505312e8be" width="50%" height="50%" alt="카메라 시스템 작업 결과 GIF">
  </a>
  
###  Gameplay Ability System (GAS)
- Unreal의 GAS 시스템을 활용하여 능력(스킬) 및 상태 효과를 관리
- **[자세히 보기](https://github.com/osy9611/ProjectPT/wiki/Gameplay-Ability-System)**
- **작업 결과**
  
  <a href="https://github.com/osy9611/ProjectPT/wiki/AI">
    <img src="https://github.com/user-attachments/assets/18bf3fdf-26de-43d7-803f-ccf194549ac9" width="50%" height="50%" alt="Skill GIF">
  </a>

### AI 시스템
- AIComponent를 통한 AI 초기화 및 AttributeSet 관리
- AIController와 AI Perception을 이용한 감지 및 행동 패턴 구현
- **[자세히 보기](https://github.com/osy9611/ProjectPT/wiki/AI)**
- **작업 결과**
  
  <a href="https://github.com/osy9611/ProjectPT/wiki/AI">
    <img src="https://github.com/user-attachments/assets/3d397b01-cf37-4e33-b9f5-4b65a8e188e9" width="50%" height="50%" alt="AI 작업 결과">
  </a>
  
---

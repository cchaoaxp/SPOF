pipeline {
  agent any
  stages {
    stage('master') {
      steps {
        git(url: 'https://github.com/cchaoaxp/SPOF.git', branch: 'master')
      }
    }

    stage('Qt-Build') {
      steps {
        sh '''echo "where is $0"

./buildScript.sh'''
      }
    }

  }
}